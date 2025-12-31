#include <bits/stdc++.h>
using namespace std;

string replace(const string &s) {
    if (s.size() > 10) {
        return string(s[0] + to_string(s.size() - 2) + s[s.size() - 1]);
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        string res = replace(s);
        cout << res << endl;
    }
}