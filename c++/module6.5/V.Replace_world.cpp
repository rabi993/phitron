/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello world hello world";
    int t =s.find("world");
    cout<<t<<endl;
    return 0;
}

*/
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s="hello world hello world";

    while(s.find("world")!= -1)
    {

        s.replace(s.find("world"),5,"$");
    }
    cout<<s<<endl;


    return 0;
}
*/
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s="BRITISHEGYPTGHANA";
    int t =s.find("EGYPT");
    cout<<t<<endl;

    while(s.find("EGYPT")!= -1)
    {

        s.replace(s.find("EGYPT"),5," ");
    }

    cout<<s<<endl;


    return 0;
}
*/
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int t =s.find("EGYPT");
    cout<<t<<endl;

    while(s.find("EGYPT")!= -1)
    {

        s.replace(s.find("EGYPT"),5," ");
    }

    cout<<s<<endl;


    return 0;
}
