#include<bits/stdc++.h>
using namespace std;
char s[10000000];
int main()
{

    s[0]=49;
    int r=1,n;
    int p,c=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<r; j++)
        {
            p=((s[j]-48)*i)+c;
            s[j]=p%10+48;
            c=p/10;
        }
        while(c)
        {
            s[r]=c%10+48;
            c=c/10;
            r++;
        }
        r=strlen(s);
    }
    for(int i=strlen(s)-1;i>=0;i--)
    cout<<s[i];
    return 0;
}

