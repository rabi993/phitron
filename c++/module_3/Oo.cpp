#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    const int maxSize = 100000001;
    char s[maxSize];

    while (cin.getline(s, maxSize)) {

        int n = strlen(s);

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (s[j] == ' ') continue;
                if (s[i] > s[j]) {
                    swap(s[i], s[j]);
                }
            }
        }

        // Print the sorted string
        for (int j = 0; j < n; j++) {
            if (s[j] == ' ') continue;
            else cout << s[j];
        }

        cout << endl;  // Add a newline after printing each sorted string
    }

    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
int main(){


char s;
while (cin.get(s)) {
//cin.getline(s,n+1);
for(int i=0;i<strlen(s)-1;i++){
    for(int j=i+1;j<n;j++){
            if (s[j]==' ')continue;
    if (s[i]>s[j]){
        swap(s[i],s[j]);
    }
}
}
for(int j=0;j<n;j++){
        if (s[j]==' ')continue;
        else cout<<s[j];
}

}
return 0;
}

*/
/*

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character

    char *s = new char[n + 1];
    cin.getline(s, n + 1);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[j] == ' ') continue;

            if (s[i] > s[j]) {
                swap(s[i], s[j]);
            }
        }
    }

    for (int j = 0; j < n; j++) {
        if (s[j] == ' ') continue;
        else cout << s[j];
    }

    delete[] s; // Don't forget to free the allocated memory

    return 0;


}
*/
