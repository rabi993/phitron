#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    unordered_map<int, int> freqMap;
    int maxFreq = 0;
    int maxFreqElement = -1;

    while (Q--) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            int X;
            cin >> X;
            freqMap[X]++;
            if (freqMap[X] > maxFreq || (freqMap[X] == maxFreq && X > maxFreqElement)) {
                maxFreq = freqMap[X];
                maxFreqElement = X;
            }
        }
        else {
            if (freqMap.empty()) {
                cout << "empty\n";
            }
            else {
                cout << maxFreqElement << "\n";
                freqMap.erase(maxFreqElement);
                maxFreq = 0;
                maxFreqElement = -1;
                for (auto &it : freqMap) {
                    if (it.second > maxFreq || (it.second == maxFreq && it.first > maxFreqElement)) {
                        maxFreq = it.second;
                        maxFreqElement = it.first;
                    }
                }
            }
        }
    }

    return 0;
}

