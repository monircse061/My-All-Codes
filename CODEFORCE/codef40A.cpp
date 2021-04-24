#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cont=0;
    char s[100000];
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=0; i<n; i++)
    {
        if(s[i]=='U')
        {
            if(s[i+1]=='R')
            {
                s[i]='D';
                s[i+1]='D';
                i++;
            }
        }
        if(s[i]=='R')
        {
            if(s[i+1]=='U')
            {
                s[i]='D';
                s[i+1]='D';
                i++;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='R'||s[i]=='U')
        {
            cont++;
        }
        else if(s[i]=='D')
        {
            cont++;
            if(s[i+1]=='D')
            {
                i++;
            }
        }
    }
    cout<<cont<<endl;
    return 0;
}
