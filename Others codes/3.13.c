#include<stdio.h>
main()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
     x=(a>b)?:(a>c)?c:a;
    printf("%d",x);

    /*y=(b>a)?:(b>c)?b:c;
    printf("%d",y);*/
    return 0;
}
