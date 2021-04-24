#include<stdio.h>
main()
{

    int i,T,K,A,j;int a[100000];
    i=0;A=0;K=0;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    scanf("%d",&a[i]);
    for(i=0;i<T;i++)
    {if(a[i]%2==0)
    {A=A+a[i];}
    else
    {K=K+a[i];}}
    printf("Abul=%d\nKabul=%d",A,K);
    return 0;

}
