#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b,r;
    char s,q;
    cin >> a >> s >> b>>q>>r;
    int flag = 0;
    long long int add= a+b;
    long long int sub= a-b;
    long long int mul= a*b;
    if (s == '+' && q=='=') {
        if (r==add) {
            flag = 1;
        }
    } else if (s == '-' && q=='=') {
        if (r==sub) {
            flag = 1;
        }
    } else if (s == '*' && q=='=') {
        if (r== mul) {
            flag = 1;
        }
    }

    if (flag == 1) {
        cout << "Yes";
    }
    else {
        if (s == '+' && q=='=') {
        cout <<add;
    } else if (s == '-' && q=='=') {
        cout <<sub;
    } else if (s == '*' && q=='=') {
        cout <<mul;
    }
    }

    return 0;
}
