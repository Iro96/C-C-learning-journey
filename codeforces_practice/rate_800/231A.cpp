#include <bits/stdc++.h>
using namespace std;

int numofproblems(vector<int> &arr) {
    int res = 0;

    for (int i = 0; i < 3; i++) {
        if (arr[i] == 1) {
            res++;
        }
    }

    if (res >= 2) {
        return 1;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int a, b, c;
    int count = 0;

    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        vector<int> arr = {a, b, c};
        if (numofproblems(arr)) {
            count++;
        }
    }
    cout << count << "\n";
}