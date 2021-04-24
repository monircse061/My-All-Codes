#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int x,n,y,z;
    scanf("%d",&n);
    x=1;
    z=1;
    y=1;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]=='?')
            z=0;
    }
    for(int i=1; i<n; i++)
    {
        if(z==1)
        {
            x=0;
            break;
        }
        else if(s[i]==s[i-1]&&s[i]!='?')
        {
            x=0;
            break;
        }
        else if(s[i]=='?'&&s[0]!='?'&&s[n-1]!='?'&&i!=n-1)
        {

            if(s[i-1]!=s[i+1]&&s[i-1]!='?'&&s[i+1]!='?'&&y==1)
            {
                x=0;
            }
            else
            {
                y=0;
                x=1;
            }
        }
    }
    if(x==0||z==1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    return 0;
}
