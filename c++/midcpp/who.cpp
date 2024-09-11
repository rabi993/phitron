#include<bits/stdc++.h>

using namespace std;

class student
{
public:
    int id;
    char name[101];
    char sec;
    int marks;

};

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    student a,b,c;
cin>>a.id>>a.name>>a.sec>>a.marks;

cin>>b.id>>b.name>>b.sec>>b.marks;

cin>>c.id>>c.name>>c.sec>>c.marks;
int p=a.marks;
int q = b.marks;
int r = c.marks;



    if(p>q && p>r){
            cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<p<<endl;

        }

    else if(q>p && q>r){

             cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<q<<endl;
    }
    else if(r>p && r>q){
         cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<r<<endl;
    }

    else if(p==q || p==r){
            cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<p<<endl;

        }

    else if( q==r){


             cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<q<<endl;
    }
    else {
            cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<p<<endl;

        }


}
return 0;
}


