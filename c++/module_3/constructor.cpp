#include<bits/stdc++.h>

using namespace std;

class student
{
public:
    int cls;
    int roll;
    double cgpa;
    //student(int n, int r, double c){
    //    cls=n;
     //   roll=r;
    //    cgpa=c;
  //  }

    student(int cls, int roll, double cgpa){
      // (*this).cls  =cls;
      //  (*this).roll = roll;
      //  (*this).cgpa =cgpa;
         this->cls  =cls;
         this->roll = roll;
         this->cgpa =cgpa;
    }
};

int main(){

    student a(6,20,3.25);
    student b(9,25,3.85);

    cout<<a.cls<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.cls<<" "<<b.roll<<" "<<b.cgpa<<endl;


return 0;
}

