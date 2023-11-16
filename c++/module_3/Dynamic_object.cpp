#include<bits/stdc++.h>

using namespace std;

class student
{
public:
    int cls;
    int roll;
    double cgpa;

    student(int cls, int roll, double cgpa){
      // (*this).cls  =cls;
      //  (*this).roll = roll;
      //  (*this).cgpa =cgpa;
         this->cls  =cls;
         this->roll = roll;
         this->cgpa =cgpa;
    }
};

student* fun(){
 //   student a(6,20,3.25);
 //   student* p = &a;
 student *a = new student(6,20,3.25);
    return a;
}
student fun1(){
    student c(9,25,3.85);
    return c;
}

int main(){

    student *ans= fun();
    student b(9,25,3.85);
    student ans1= fun1();

    student* k = new student(9,25,3.85);


    cout<<(*ans).cls<<" "<<(*ans).roll<<" "<<(*ans).cgpa<<endl;
    delete ans;
    cout<<(*ans).cls<<" "<<(*ans).roll<<" "<<(*ans).cgpa<<endl;
    cout<<b.cls<<" "<<b.roll<<" "<<b.cgpa<<endl;
    cout<<ans1.cls<<" "<<ans1.roll<<" "<<ans1.cgpa<<endl;
    cout<<(*k).cls<<" "<<(*k).roll<<" "<<(*k).cgpa<<endl;
    cout<<k->cls<<" "<<k->roll<<" "<<k->cgpa<<endl;


return 0;
}

