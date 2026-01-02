#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007;
static const int MAXN = 1000000;

long long modpow(long long a, long long e) {
    long long r = 1;
    while (e) {
        if (e & 1) r = r * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    vector<int> freq(26, 0);
    for (char c : S) freq[c - 'A']++;

    int odd = 0;
    for (int f : freq) if (f & 1) odd++;
    if (odd > 1) {
        cout << 0 << '\n';
        return 0;
    }

    int L = 0;
    for (int f : freq) L += f / 2;

    vector<long long> fact(L + 1), invfact(L + 1);
    fact[0] = 1;
    for (int i = 1; i <= L; i++) fact[i] = fact[i - 1] * i % MOD;
    invfact[L] = modpow(fact[L], MOD - 2);
    for (int i = L; i > 0; i--) invfact[i - 1] = invfact[i] * i % MOD;

    long long ans = fact[L];
    for (int f : freq) {
        ans = ans * invfact[f / 2] % MOD;
    }

    cout << ans << '\n';
    return 0;
}
