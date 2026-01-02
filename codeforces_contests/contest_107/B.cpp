#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> C(N);
    long long need = 0;

    for (int i = 0; i < N; i++) {
        long long B;
        cin >> B >> C[i];
        need += (C[i] - B);
    }

    if (need == 0) {
        cout << 0 << '\n';
        return 0;
    }

    sort(C.begin(), C.end(), greater<long long>());

    long long sum = 0;
    int cnt = 0;
    for (long long cap : C) {
        sum += cap;
        cnt++;
        if (sum >= need) break;
    }

    cout << cnt << '\n';
    return 0;
}
