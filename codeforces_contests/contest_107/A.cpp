#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long L, R, T;
    if (!(cin >> L >> R >> T)) return;

    long long min_x = max(L, T - R);

    long long max_x;
    if (T % 2 == 0) {
        max_x = (T / 2) - 1;
    } else {
        max_x = T / 2;
        if (T < 0) max_x--;
    }

    max_x = min(max_x, T - L);

    long long ans = max(0LL, max_x - min_x + 1);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
