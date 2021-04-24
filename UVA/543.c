#include<stdio.h>
int main()
{
    int a,b,c,i,j,k=2,x;
    while(scanf("%d",&a)&&a!=0)
     {
    for(i=3;i<a-2;i=i+2)
      {j=a-i;x=1;

    for(k=2;k*k<j;k++)
    {if(j%k==0)
    {x=0;
    }}
    if(x==1)
   {printf("%d = %d + %d\n",a,i,j);
   break;}


   } if(x==0)
   printf("Goldbach's conjecture is wrong.\n");}
        return 0;
}
