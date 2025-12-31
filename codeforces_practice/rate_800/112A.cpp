#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1;
    string s2;

    cin >> s1;
    cin >> s2;
    for (size_t i = 0; i < s1.size(); ++i) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    if (s1 < s2) {
        cout << -1 << "\n";
    } else if (s1 > s2) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
}