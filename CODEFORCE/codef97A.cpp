#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    int a[10000],l=0;
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]!='+')
        {
            a[l]=s[i]-'0';
            l++;
        }
    }
    sort(a,a+l);
    for(int i=0; i<l; i++)
    {
        printf("%d",a[i]);
        if(i!=l-1)
        {
            printf("+");
        }
    }
    return 0;
}
