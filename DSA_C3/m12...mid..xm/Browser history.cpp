#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string>myList;
    string v;
    while(cin>>v && v!= "end"){

        myList.push_back(v);
    }
   /* for (string val : myList){

        cout << val << " ";
    }
    cout << endl;*/
    int c=0;
int q;
    cin>>q;
    for(int k=0; k<q;k++){
    int sz = myList.size();
    string x;
    cin>>x;
    //int c=0;
    if (x=="visit"){
        string ad;
        cin>> ad;
        int b=0;
        for (auto it = myList.begin(); it != myList.end(); ++it) {
                if(*it==ad){
                    cout << *it <<endl;
                    c=b;
                    break;
                    }
                    b++;
        }
        //cout<<c<<endl;
        if(b>=sz){
                cout<<"Not Available"<<endl;
                //c=0;
        }

    }
     //cout<<c<<endl;
    if(x=="next"){
        int a=0;
        int p=c+1;
         //cout<<c<<endl;
        if(p<sz ){
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
        c=sz-1;
        }

    }
     //cout<<c<<endl;
    if(x=="prev"){
        int a=0;
        int p=c-1;
        if(p>=0){
            for (auto it = myList.begin(); it != myList.end(); ++it) {
                if(a==p){
                    cout << *it <<endl;
                    c-=1;
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

    return 0;
}
