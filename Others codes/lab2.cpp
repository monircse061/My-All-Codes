#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"cons base"<<endl;}
    ~base(){cout<<"des bae"<<endl;}
    };
    class derive:public base
    {
    public:
        derive()
        {
            cout<<"cons derive"<<endl;
        }
        ~derive()
        {
            cout<<"des derive"<<endl;
        }};

        int main()
        {
            derive ob;
            return 0;
        }
