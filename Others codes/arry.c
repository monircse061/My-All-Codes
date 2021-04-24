#include<stdio.h>
main()
{
    int i,sum;int num[3];sum=0;

    for(i=0;i<3;i++)
    {scanf("%d",&num[i]);
    sum=sum+num[i];}
    printf("total= %d",sum);
    return 0;

}
