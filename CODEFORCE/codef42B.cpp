#include<bits/stdc++.h>
using namespace std;
char s[1000009];
int main()
{
    int n,m,p,cont=0,a,b;
    scanf("%d %d %d",&n,&m,&p);
    scanf("%s",s);
    a=m;
    b=p;
    for(int i=0; i<n; i++)
    {
        if(a>b)
        {
            if(s[i]=='.'&&a!=0)
            {
                s[i]='A';
                a--;
                i++;
            }
            if((s[i-1]!='B'&&s[i]=='.'&&b!=0)||(i==0&&s[i]=='.'))
            {
                s[i]='B';
                b--;
            }
        }
        else
        {
            if((s[i-1]!='B'&&s[i]=='.'&&b!=0)||(i==0&&s[i]=='.'))
            {
                s[i]='B';
                b--;i++;
            }
            if(s[i]=='.'&&a!=0)
            {
                s[i]='A';
                a--;

            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A'||s[i]=='B')
            cont++;
    }
    cout<<cont;
    return 0;
}

