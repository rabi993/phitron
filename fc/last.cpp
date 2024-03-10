#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;
    vector<long long int> s;
    vector<string> f;

    while (Q--) {
        int q;
        cin >> q;
        if (q == 1) {
            long long int x;
            cin >> x;
            if (s.empty()) {
                s.push_back(x);

                f.push_back(to_string(x));
            }
            else{
                    sort(s.begin(), s.end());
                if(x < s.end() || s.find(x) == true){
                    s.push_back(x);
                    sort(s.begin(), s.end());


                }
                if(x > s.end() ){
                    s.push_back(x);
                    sort(s.begin(), s.end());
                    f.push_back(to_string(x));

                }
            }
        } else {
            if (s.empty()) f.push_back("empty");
            else {
                s.pop_back();
            }
        }
    }

    for (auto e : f) {
        cout << e << "\n";
    }

    return 0;
}
