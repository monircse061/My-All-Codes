#include<stdio.h>
int main()
{
    int k,a,i;
    while(scanf("%d%d",&a,&k)!=EOF)
    {

        for(i=a; i>=k; i=i/k+i%k)
            a=a+i/k;

        printf("%d\n",a);
    }
    return 0;
}
