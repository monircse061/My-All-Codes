#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=1,x=1;
    scanf("%I64d %I64d",&a,&b);
    for(long long int i=a+1; i<=b; i++)
    {
        c=c*i;
        c=c%10;
        x=0;
        if(c==0)
        {
            x=2;
            break;
        }
    }
    if(x==1)
    {
        printf("1\n");
    }
    else if(x==2)
    {
        printf("0\n");
    }
    else
    {
        printf("%I64d",c);
    }
    return 0;
}
