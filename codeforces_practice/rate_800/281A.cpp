#include <iostream>
#include <cctype>
using namespace std;

void capitalizeFirstLetter(string &s) {
    if (!s.empty() && islower(s[0])) {
        s[0] = toupper(s[0]);
    }
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    capitalizeFirstLetter(s);
}