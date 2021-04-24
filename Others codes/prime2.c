#include<stdio.h>
main()
{
    int i,j,m,n,x,a,pot,T;
    scanf("%d",&T);
    while(T--)
   {scanf("%d%d",&m,&n);
   if(m>n)
    {pot=m;m=n;n=pot;}
    for(i=m;i<=n;i++)
    {a=i;x=1;
    if(a==1)
    x=0;
    for(j=2;j*j<=a;j++)
    if(a%j==0)
    x=0;
    if(x==1)
    printf("%d is prime\n ",a);
    else
    printf("%d is not prime\n ",a);}}
    return 0;

}
