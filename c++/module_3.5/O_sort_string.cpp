
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character

    char *s = new char[n + 1];
    cin.getline(s, n + 1);

    // An array to store the count of each character
    int count[26] = {0};

    // Count the frequency of each character
    for (int i = 0; i < n; i++) {
        count[s[i] - 'a']++;
    }

    // Display the characters in sorted order based on their frequency
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << static_cast<char>(i + 'a');
        }
    }

    // Release the dynamically allocated memory
    delete[] s;

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

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
getchar();
char s[n+1];
cin.getline(s,n+1);

for(int i=0; i<n;i++){
        if(s[i]=='a'||s[i]=='A' ) cout<<'a';
        else if(s[i]=='b'||s[i]=='B' ) cout<<'b';
        else if(s[i]=='c'||s[i]=='C' ) cout<<'c';
        else if(s[i]=='d'||s[i]=='D' ) cout<<'d';
        else if(s[i]=='e'||s[i]=='E' ) cout<<'e';
        else if(s[i]=='f'||s[i]=='F' ) cout<<'f';
        else if(s[i]=='g'||s[i]=='G' ) cout<<'g';
        else if(s[i]=='h'||s[i]=='H' ) cout<<'h';
        else if(s[i]=='i'||s[i]=='I' ) cout<<'i';
        else if(s[i]=='j'||s[i]=='J' ) cout<<'j';
        else if(s[i]=='k'||s[i]=='K' ) cout<<'k';
        else if(s[i]=='l'||s[i]=='L' ) cout<<'l';
        else if(s[i]=='m'||s[i]=='M' ) cout<<'m';
        else if(s[i]=='n'||s[i]=='N' ) cout<<'n';
        else if(s[i]=='o'||s[i]=='O' ) cout<<'o';
        else if(s[i]=='p'||s[i]=='P' ) cout<<'p';
        else if(s[i]=='q'||s[i]=='Q' ) cout<<'q';
        else if(s[i]=='r'||s[i]=='R' ) cout<<'r';
        else if(s[i]=='s'||s[i]=='S' ) cout<<'s';
        else if(s[i]=='t'||s[i]=='T' ) cout<<'t';
        else if(s[i]=='u'||s[i]=='U' ) cout<<'u';
        else if(s[i]=='v'||s[i]=='V' ) cout<<'v';
        else if(s[i]=='w'||s[i]=='W' ) cout<<'w';
        else if(s[i]=='x'||s[i]=='X' ) cout<<'x';
        else if(s[i]=='y'||s[i]=='Y' ) cout<<'y';
        else if(s[i]=='z'||s[i]=='Z' ) cout<<'z';



}
    //cout<<s<<endl;
   // cout<<strlen(s)<<endl;







return 0;
}
*/
