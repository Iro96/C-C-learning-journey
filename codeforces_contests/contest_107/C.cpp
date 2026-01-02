#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    vector<pair<string,int>> tests(T);
    int maxK = 0;

    for (int i = 0; i < T; i++) {
        cin >> tests[i].first >> tests[i].second;
        maxK = max(maxK, tests[i].second);
    }

    vector<vector<long long>> dp(maxK + 1, vector<long long>(10, 0));

    for (int d = 0; d <= 9; d++) dp[0][d] = 1;

    for (int k = 1; k <= maxK; k++) {
        for (int d = 0; d <= 8; d++) {
            dp[k][d] = dp[k-1][d+1];
        }
        dp[k][9] = (dp[k-1][1] + dp[k-1][0]) % MOD;
    }

    for (auto &tc : tests) {
        const string &N = tc.first;
        int K = tc.second;

        long long ans = 0;
        for (char c : N) {
            ans = (ans + dp[K][c - '0']) % MOD;
        }

        cout << ans << '\n';
    }

    return 0;
}
