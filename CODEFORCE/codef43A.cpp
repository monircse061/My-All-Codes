#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    char ch;
    int x=1,y,n;
    cin>>n;
    scanf("%s",s);
    while(x==1)
    {
        x=0;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='0'&&s[i+1]=='1')
            {
                ch=s[i];
                s[i]=s[i+1];
                s[i+1]=ch;
                x=1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%c",s[i]);
        if(s[i+1]=='1')
        {
            i++;
            while(s[i]=='1')
            {
                i++;
                if(s[i]=='0')
                {
                    printf("%c",s[i]);
                    break;
                }
            }
        }
    }
    return 0;
}
