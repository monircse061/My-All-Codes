#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=1;
    char s[100000];
    scanf("%d",&n);
    scanf("%s",s);
    if(n==1)
    {
        if(s[0]=='1')
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1'&&s[i+1]=='1')
            {
                x=0;
                break;
            }
            if(i+1<=n)
            {
                if(i!=0&&s[i]=='0'&&s[i-1]=='0'&&s[i+1]=='0')
                {
                    x=0;
                    break;
                }
            }
            if(s[i-1]=='0'&&s[i]=='0'&&i==n-1)
            {
                x=0;
                break;
            }
            if(i-1==0)
            {
                if(s[i-1]=='0'&&s[i]=='0')
                {
                    x=0;
                    break;
                }
            }
        }
        if(x==0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    return 0;
}
