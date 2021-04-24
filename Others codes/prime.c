#include<stdio.h>
main()
{
    int a,i,x,n;
    scanf("%d",&n);
    a=n;
    x=1;if(a==1)x=0;
    for(i=2;i<a;i++)


   { if(a%i==0)
    x=0;}
    if(x==1)
    printf("prime");
    else
    printf("not prime");
    return 0;
}
