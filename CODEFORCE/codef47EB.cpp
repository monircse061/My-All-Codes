#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l=0,sum=0;
    cin>>s;
    int len=s.length();
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            cout<<0;
        }
        else if(s[i]=='2')
        {
            break;
        }
        l=i+1;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            cout<<1;
        }
    }
    for(int i=l;i<s.length();i++){
          if(s[i]=='2')
            cout<<2;
          else if(s[i]=='0')
            cout<<0;
    }
    return 0;
}
