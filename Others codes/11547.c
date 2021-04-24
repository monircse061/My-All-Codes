#include<stdio.h>
main()
{
    int x,y,i,m,t;
    scanf("%d",&t);
    while(t--)
    { i=1;
    scanf("%d",&x);
    y=(((x*567)/9+7492)*235)/47-498;
    while(i<=2)
        {m=y%10;
        y=y/10;
        i++;}
        if(m<0)
            printf("%d\n",-1*m);
        else
        printf("%d\n",m);}
        return 0;
}
