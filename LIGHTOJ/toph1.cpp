#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000],s1[10000];
    int i,j,x,y,z,a[10000],b[10000],c,l,l1,f=0,g=0,l2;
    scanf("%s",s);
    l2=strlen(s);
    scanf("%s",s1);
    l1=strlen(s1);
    c=max(l1,l2);
    for(i=0; i<c; i++)
    {
        j=0;
        l=i;
        x=1;
        while(j<l1)
        {
            if(s[l]==s1[j]||s[l]==s1[j]+32||s[l]+32==s1[j])
            {
                a[f]=j;
                x=0;
                break;
            }
            if(x==1&&j==l1-1)
            {
                a[f]=-1;
            }
            j++;
        }
        j=0;
        x=1;
        while(j<l2)
        {
            if(s1[l]==s[j]||s1[l]==s[j]+32||s1[l]+32==s[j])
            {
                b[g]=j;
                x=0;
                break;
            }
            if(x==1)
            {
                b[g]=-1;
            }
            j++;
        }
        f++;
        g++;
    }
    for(i=0; i<l2; i++)
    {
        printf("%d",a[i]);
        if(i<l2-1)printf(",");
    }
    printf(".\n");
    for(i=0; i<l1; i++)
    {
        printf("%d",b[i]);
        if(i<l1-1)printf(",");
    }
    printf(".\n");
    return 0;
}
