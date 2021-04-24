#include<stdio.h>
int main()
{
int a,b,n,c=0,i;
while(scanf("%d",&n)&&n!=0)
{  if(c==0)
        {printf("PERFECTION OUTPUT\n");}
        c=1;
    b=0;
for(i=2;i*i<=n;i++)
    {if(n%i==0)
    b=b+i+n/i;}
if(b+1==n)
    {printf("%5d  PERFECT\n",n);}
else if(b<n)
    {printf("%5d  DEFICIENT\n",n);}
else if(b>n)
    {printf("%5d  ABUNDANT\n",n);}}
    printf("END OF OUTPUT");
return 0;
}
