#include<bits/stdc++.h>

using namespace std;

class student
{
public:
    int id;
    char name[100];
    char sec;
    int marks;

};

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    student a,b,c;
cin>>a.id>>a.name;
//getchar();
//cin.getline(a.name, 100);
cin>>a.sec>>a.marks;

cin>>b.id>>b.name;
//getchar();
//cin.getline(b.name, 100);
cin>>b.sec>>b.marks;

cin>>c.id>>c.name;
//getchar();
//cin.getline(c.name, 100);
cin>>c.sec>>c.marks;
int p=a.marks;
int q = b.marks;
int r = c.marks;

    if(p>=q && p>=r){
        if(p==q) {
            if(a.id<b.id){
            cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<p<<endl;
        }
        else{
            cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<q<<endl;
        }
        }
        if(p==r ){
            if(a.id<c.id){
             cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<p<<endl;
        }
        else{
            cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<r<<endl;
        }
        }
        if(p>q && p>r){
            cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<p<<endl;
        }
    }
    else if(q>=p && q>=r){

        if(q==r){
            if(b.id<c.id){
             cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<q<<endl;
        }
        else{
            cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<r<<endl;
        }
        }
        else if(q>p && q>r){
            cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<q<<endl;
        }

    }
    else {
         cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<r<<endl;
    }

}
return 0;
}
