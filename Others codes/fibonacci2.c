#include<stdio.h>
main()
{
    int i,n,fact,a,b,c;
    scanf("%d",&n);
    a=0;b=1;
    for(i=0;i<n;i++)
  {if(i<=1)
    c=i;
  else
    {c=a+b;
  a=b;
  b=c;}
  if((i+1)==n)
  {printf("%d\n",c);}}

    return 0;

}
