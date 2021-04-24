#include<stdio.h>
main()
{
    int sum,i;sum=0;
    for(i=1;i<1000;i+=2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
