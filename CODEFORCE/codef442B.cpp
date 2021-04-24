#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=1,y=1,a=0,b=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='a'&&x==1)
        {
            x=0;
            if(s[i]=='a')
            {
                a++;
            }
            y=1;
        }
        else if(y==1)
        {
            x=1;
            y=0;
            if(s[i]=='b')
            {
                b++;
            }
        }
    }
    //cout<<a<<" "<<b;
    if(a==2&&b==1)
    {
        cout<<s.length();
    }
    else if(a>2&&b!=0||b>1&&a!=0)
    {
        if(a>b)
        {
            cout<<s.length()-b;
        }
        else
        {
            cout<<s.length()-a;
        }
    }
    else
    {
        cout<<s.length();
    }
    return 0;
}
