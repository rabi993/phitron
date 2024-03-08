#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;
    set<long long int> s;
    vector<string> f;

    while (Q--) {
        int q;
        cin >> q;
        if (q == 1) {
            long long int x;
            cin >> x;
            if (s.empty()) {
                s.insert(x);
                f.push_back(to_string(x));
            }
            else {
                long long int p = s.end();
                int sz=s.size();

                s.insert(x);
                if(p<x){
                    f.push_back(to_string(x));
                }

            }


            // if (s.empty() || s.find(x) == s.end()) {
            //     s.insert(x);
            //     f.push_back(to_string(x));
            // }
        } else {
            if (s.empty()) f.push_back("empty");
            else {
                auto it = s.end();
                it--;
                s.erase(it);
            }
        }
    }

    for (auto e : f) {
        cout << e << "\n";
    }

    return 0;
}
