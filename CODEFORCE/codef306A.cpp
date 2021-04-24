#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0,y=1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A'&&x==0)
        {
            //i++;
            if(s[i+1]=='B')
            {
                x=1;
                y=0;
                i++;
            }
        }
        else if(s[i]=='B'&&y==0)
        {
            if(s[i+1]=='A')
            {
                y=1;
            }
        }
        if(x==1&&y==1)
        {
            printf("YES");
            return 0;
        }
    }
    x=0,y=1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='B'&&x==0)
        {
            if(s[i+1]=='A')
            {
                x=1;
                y=0;i++;
            }
        }
        else if(s[i]=='A'&&y==0)
        {
            if(s[i+1]=='B')
            {
                y=1;
            }
        }
        if(x==1&&y==1)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
