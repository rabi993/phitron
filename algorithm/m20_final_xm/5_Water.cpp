
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int maxIndex = 0;
        for (int i = 1; i < n; i++) {
            if (v[i] > v[maxIndex]) {
                maxIndex = i;
            }
        }

        // Find the index of the second maximum element
        int secondMaxIndex = -1;
        for (int i = 0; i < n; i++) {
            if (i != maxIndex && (secondMaxIndex == -1 || v[i] > v[secondMaxIndex])) {
                secondMaxIndex = i;
            }
        }

        if(maxIndex <secondMaxIndex){
            cout << maxIndex << " " << secondMaxIndex << endl;
        }
        else{
            cout << secondMaxIndex << " " << maxIndex << endl;
        }

    }

    return 0;
}
