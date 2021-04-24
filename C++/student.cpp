#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class student
{
    char s[100],r[100],e[100],d[100];
public:
    void input()
    {
        cout<<"Enter Name"<<endl;cin>>s; cout<<"Enter ID"<<endl;cin>>r; cout<<"Enter CGPA"<<endl;
        cin>>e; cout<<"Enter Dept."<<endl;cin>>d;






    }
    void display()
    {
        cout<<"Name:"<<s<<endl;
        cout<<"ID:"<<r<<endl;
        cout<<"CGPA:"<<e<<endl;
        cout<<"Dept."<<d<<endl;
    }

};
int main()
{
    student ob;
    ob.input();
    ob.display();
    return 0;
}
