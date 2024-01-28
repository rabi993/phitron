#include <bits/stdc++.h>


using namespace std;


string can_build_square(int n, vector<int>& squares) {
    long long total_squares = 0;
    for (int i = 0; i < n; i++) {
        total_squares += squares[i];
    }
    long long square_root = sqrt(total_squares);
    if (square_root * square_root == total_squares) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> squares(n);
        for (int i = 0; i < n; i++) {
            cin >> squares[i];
        }
        cout << can_build_square(n, squares) << endl;
    }
    return 0;
}
