#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    while(n>0)
        {i=n%10;
       n=n/10;
    printf("%d",i);}
    return 0;
}
