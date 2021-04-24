#include<stdio.h>
main()
{
    int m,n,x;
    scanf("%d%d",&m,&n);
    x=m%n;
    if(m%n==0)
        printf("mul");
    else
        printf("not mul");
    return 0;
}
