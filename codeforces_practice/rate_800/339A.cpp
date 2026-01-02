#include <bits/stdc++.h>
using namespace std;

void helpfulmaths(const string &s) {
    string result;
    for (char c : s) {
        if (c != '+') {
            result += c;
        }
    }
    sort(result.begin(), result.end());

    string output;
    for (size_t i = 0; i < result.size(); ++i) {
        output += result[i];
        if (i != result.size() - 1) {
            output += '+';
        }
    }
    cout<< output << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    helpfulmaths(s);
}