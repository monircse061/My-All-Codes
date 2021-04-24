#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int a=0,b=0,c=0,len;
    cin>>s1;
    s2=s1;
    sort(s1.begin(),s1.end());
    len=s1.length();
    for(int i=0; i<len; i++)
    {
        if(s1[i]=='a')
        {
            a++;
        }
        else if(s1[i]=='b')
        {
            b++;
        }
        else if(s1[i]=='c')
        {
            c++;
        }
    }
    if(s1!=s2||a==0||b==0||c==0)
    {
        cout<<"NO"<<endl;
    }
    else if(c==a||c==b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
