#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string>myList;
    string v;
    while(cin>>v && v!= "end"){

        myList.push_back(v);
    }



    for (string val : myList){

        cout << val << " ";
    }
    cout << endl;
int q;
    cin>>q;
    while(q!=0){
    int sz = myList.size();
    string x;
    cin>>x;
    int c=0;
    if (x=="visit"){
        string ad;
        cin>> ad;

        for (auto it = myList.begin(); it != myList.end(); ++it) {
                if(*it==ad){
                    cout << *it <<endl;
                    break;
                    }
                    c++;
        }
        cout<<"Not Available"<<endl;
        c=0;
    }
    if(x=="next"){
        int a=0;
        int p=c+1;
        if(p<=sz){
            for (auto it = myList.begin(); it != myList.end(); ++it) {
                if(a==p){
                    cout << *it <<endl;
                    c+=1;
                    break;
                    }
                    a++;
        }
        }
        else{
        cout<<"Not Available"<<endl;
        c=sz;
        }

    }
    if(x=="prev"){
        int a=0;
        int p=c-1;
        if(p<=0){
            for (auto it = myList.begin(); it != myList.end(); ++it) {
                if(a==p){
                    cout << *it <<endl;
                    c+=1;
                    break;
                    }
                    a++;
        }
        }
        else{
        cout<<"Not Available"<<endl;
        c=0;
        }

    }
    }






q--;


    return 0;
}
