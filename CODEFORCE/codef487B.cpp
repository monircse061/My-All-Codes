#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,k,x=0;
    scanf("%d %d",&n,&k);
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(i+k<=n-1)
        {
            if(s[i]=='.'||s[i+k]=='.')
            {

                if(s[i]=='.'&&s[i+k]=='0')
                {
                    s[i]='1';
                }
                else if(s[i]=='.'&&s[i+k]=='1')
                {
                    s[i]='0';
                }
                else if(s[i+k]=='.'&&s[i]=='0')
                {
                    s[i+k]='1';
                }
                else if(s[i+k]=='.'&&s[i]=='1')
                {
                    s[i+k]='0';
                }
                else if(s[i]=='.'&&s[i+k]=='.')
                {
                    s[i]='0';
                    s[i+k]='1';
                }
            }
        }
        else
        {
            if(s[i]=='.')
            {
                s[i]='1';
            }
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(i+k<=n-1)
        {
            if(s[i]!=s[i+k])
            {
                x=1;
                break;
            }
        }
    }
    if(x==1)
    {
        cout<<s<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}
