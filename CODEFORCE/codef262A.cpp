#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,n1=0,sum=0,n2=0;
    scanf("%d %d",&n,&m);
    n1=n;
    //n1+=n/m;
    while(n1>=m)
    {
        if(n1/m!=0)
        {
            n2=n1%m;
        }
        n1/=m;
        sum+=n1;
        n1+=n2;
    }
    printf("%d",sum+n);
    return 0;
}
