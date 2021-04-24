#include<stdio.h>
main()
{
    int n,i,j,x=1,y;
    scanf("%d",&y);
    scanf("%d",&n);
    for(i=1;i<=y-1;i++)
    {x=x*10;}
    for(j=1;j<=y-1;j++)
        {n=n%x;
        x=x/10;
        printf("%d\n",n);}
        return 0;
}
