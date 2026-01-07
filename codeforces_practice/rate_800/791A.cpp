#include <bits/stdc++.h>
using namespace std;

int bearnbigbrother(int x, int y) {
    if (x > y) return 0;

    double ratio = (double)y / x;
    double base = 3.0 / 2.0;

    int n = floor(log(ratio) / log(base)) + 1;
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    cout << bearnbigbrother(x, y) << endl;
}
