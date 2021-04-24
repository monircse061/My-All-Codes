#include<stdio.h>
main()
{
    int i,T,a,b,sum;
    scanf("%d",&T);
    while(T--)
     {scanf("%d\n%d",&a,&b);
     sum=0;
    for(i=a;i<=b;i++)
        if(i%2!=0)
        sum=sum+i;
    printf("case 1:%d\n",sum);}
    return 0;
}
