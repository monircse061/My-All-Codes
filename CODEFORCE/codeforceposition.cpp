#include<bits/stdc++.h>
using namespace std;
#define val 1000000
int s[val],s1[val];
int main()
{
    int m,n,r,a,b,c,i,x,y,j=0,l=1;
    scanf("%d%d%d",&a,&b,&c);
    a=a*10;
    while(a<b)
    {
        a=a*10;
        j++;
        if(c==0)
        {
            printf("%d",j);
            l=0;
        }
    }
    for(i=j;l==1; i++)
    {

        n=a/b;
        m=a%b;
        if(n==c)
        {
            printf("%d",i+1);
            break;
        }
        else if((m==0&&c==0))
        {
            printf("%d\n",i+2);
            break;
        }
        a=m*10;
        s[i]=m;
        s1[s[i]]++;
        if(s1[s[i]]==2)
        {
            printf("-1\n");
            break;
        }

    }
    return 0;
}
