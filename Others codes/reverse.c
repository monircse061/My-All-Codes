#include<stdio.h>
main()
{
    int n,x,y;
    scanf("%d",&n);
    while(1)
     {

        x=n%10;
        printf("%d",x);
        if(x==1)
            break;
    n=n/10;
    }
    return 0;
}
