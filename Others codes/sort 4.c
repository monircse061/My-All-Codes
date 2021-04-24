#include<stdio.h>
main()
{
    int a,b,c,A,B,X,T;
    scanf("%d",&T);
    while(T--)
    {scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        B=a;
        a=b;
        b=B;
    }
    if(b>c)
        {X=b;
        b=c;
        c=X;}
    if(a>b)
    {
        A=a;
        a=b;
        b=A;
    }
    printf("%d %d %d\n",a,b,c);}
    return 0;
}
