#include<stdio.h>

main()
{
    int n,i=0,x;
    scanf("%d",&n);
    x=n;
    while(n>0)
        {i=i*10+n%10;
    n=n/10;}

    if(x==i)
        printf("same");
    else
        printf("N");



    return 0;




}
