#include<stdio.h>
main()
{
    int n=0,x,y;
    while(scanf("%d",&x)&&x>0)
    {while(x>0)
        {n=n*10+x%3;
        x=x/3;}
        while(n>0)
            {y=n%10;
            n=n/10;
            printf("%d",y);}
            printf("\n");}
            return 0;





}
