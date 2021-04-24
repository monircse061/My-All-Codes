#include<stdio.h>
main()
{
    float y,x;int n,i;
    scanf("%f%d",&x,&n);
    y=1;
    for(i=1;i<=n;i++)
        {y=y*x;}
    printf("%.2f",y);
    return 0;
}
