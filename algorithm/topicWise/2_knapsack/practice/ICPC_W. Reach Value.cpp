#include <bits/stdc++.h>
using namespace std;

bool canReach(long long current, long long target) {
    // Base cases
    if (current == target) {
        return true;
    }
    if (current > target) {
        return false;
    }

    // Recursively try both operations
    return canReach(current * 10, target) || canReach(current * 20, target);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (canReach(1, N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
