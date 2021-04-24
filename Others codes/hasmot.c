#include<stdio.h>
main()
{
    int a,b,i,j,c,T;
    scanf("%d",&T);
    while(T--)
        {scanf("%d%d",&a,&b);
    while(a<b)
        {c=a;
        a=b;
        b=c;}
    j=a-b;
    printf("%d\n",j);}
    return 0;
}
