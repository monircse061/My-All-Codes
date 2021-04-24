#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    scanf("%s",s);
    int len=strlen(s);
    int j=len-1,j1=0,x=1;
    while(j1<j)
    {
        if(s[j1]!=s[j])
        {
            x=0;
            break;
        }
        j--;
        j1++;
    }int l=len;
    if(x==0)
    {
        for(int i=len-2; i>=0; i--)
        {
            s[l]=s[i];
            l++;
        }
        s[l]='\0';
        printf("%s",s);
    }
    else
    {
        printf("%s",s);
    }
    return 0;
}
