#include <bits/stdc++.h>
using namespace std;

void boyorgirl(string &usrname) {
    set<char> charset;
    
    for (char c : usrname) {
        charset.insert(c);
    }

    if (charset.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;

    boyorgirl(input);
}