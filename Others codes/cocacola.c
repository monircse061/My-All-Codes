#include<stdio.h>
main()
{
    int a,n,i,T;

    while(scanf("%d",&n)&&n!=0)
    {

    a=0;
    for(i=n;i>=3;i=i/3+i%3)
    {
        a=a+i/3;
    }
    if(i==2)
        printf("%d\n",a+1);
    else
        printf("%d\n",a);}
    return 0;
}
