#include<stdio.h>
int main()
{
   int a[100],i,n,l,x;
   while(scanf("%d",&n)&&n>0)
   {for(i=0;n>0;i++)
    {a[i]=n%3;
   n=n/3;
   l=i;}
   for(x=l;x>=0;x--)
   {printf("%d",a[x]);}
   printf("\n");}

    return 0;





}
