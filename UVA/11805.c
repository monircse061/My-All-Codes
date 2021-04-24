#include<stdio.h>
int main()
{
    int i,j,l,n,k,p;
    while(scanf("%d%d%d",&n,&k,&p)!=EOF)
    {j=k-1;
    for(i=0;i<=p;i++)
        {j++;
       l=j;
    if(j==n)
        j=0;}
        printf("%d\n",l);}
        return 0;
}
