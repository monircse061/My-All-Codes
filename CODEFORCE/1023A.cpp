#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int n,m,x=0,pos=0;
    scanf("%d %d",&n,&m);
    cin>>s>>s1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='*')
        {
            x++;
            pos=i;
        }
    }
    if(x==0)
    {
        if(s!=s1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    else if(x!=0&&s1.length()<s.length()-x)
    {
        printf("NO");
    }
    else
    {
        for(int i=0; i<pos; i++)
        {
            if(s[i]!=s1[i])
            {
                printf("NO");
                return 0;
            }
        }
        for(int i=s.length()-1,j=s1.length()-1; i>pos; i--,j--)
        {
            if(s[i]!=s1[j])
            {
                printf("NO");
                return 0;
            }
        }
        printf("YES");
    }
    return 0;
}
