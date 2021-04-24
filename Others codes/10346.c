#include<stdio.h>
int main()
{
    int n,k,i,a;
    while(scanf("%d%d",&n,&k)==2&&k>1)
    {
        a=0;
        for(i=n; i>=k; i=i/k+i%k)
            a+=i/k;
        printf("%d\n",a+n);
    }
    return 0;
}
