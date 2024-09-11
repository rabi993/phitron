#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;
    set<long long int>s;
    vector<string>f;

    while (Q--) {
            int q;cin>>q;
            if(q==1){

                long long int x;
                if (s.empty()) {
                    s.push(x);
                    f.push_back(s.back())
                }
                else{
                    int sz=s.size();
                    s.push(x);
                    int sz1=s.size();
                    if(sz !=sz1){
                        f.push_back(s.back())
                    }

                }
            }
            else{
                    if (s.empty()) f.push_back("empty");
                    else{
                        s.pop_back();
                    }

            }

    }
    for(auto e:f){
        cout<<e<<"\n"
    }





    return 0;
}

