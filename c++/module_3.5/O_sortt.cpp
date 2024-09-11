/*
#include <bits/stdc++.h>
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
//for(int i=97; i<123;i++){

  //      for(int j=0;j<n;j++){
  //          if((int)s[j]==i){
//
   //             cout<< (char)i;
  //          }
  //      }
//}
}
return 0;
}


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    char s;

    while (cin.get(s)) {
        int p= strlen(s);

       for(int i=97; i<123;i++){

    for(int j=0;j<strlen(s);j++){
         if((int)s[j]==i){

            cout<< (char)i;
        }
       }
}
        }



    return 0;
}


#include <iostream>
using namespace std;

int main() {
    char s;

    // An array to store the count of each character
    int count[26] = {0};

    while (cin.get(s)) {
        if (islower(s)) {
            // Increment the count for the current character
            count[s - 'a']++;
        }
    }

    // Display the characters in sorted order based on their frequency
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << static_cast<char>(i + 'a');
        }
    }

    return 0;
}

*/



#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
getchar();
char s[n+1];
cin.getline(s,n+1);
for(int i=0;i<n-1;i++){
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
//for(int i=97; i<123;i++){

  //      for(int j=0;j<n;j++){
  //          if((int)s[j]==i){
//
   //             cout<< (char)i;
  //          }
  //      }
//}
return 0;
}
