#include<stdio.h>
main()
{
    int a,b,c,d,m,n,x1,x2;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);
    while(a*d-c*b!=0)
     {
         x1=m*d-b*n/a*d-c*b;
    x2=n*a-m*c/a*d-c*b;
    printf("%d\t%d",x1,x2);
    break;}
    return 0;
}
