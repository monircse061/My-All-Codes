#include<stdio.h>
int main()
{
    int a[1000];int x,b,i,j,p;
    while(scanf("%d",&x)&&x!=0)
    {   b=0;
        for(i=0;x>0;i++)
       {p=x%2;
       a[i]=p;
       b=b+a[i];
       x=x/2;}
       printf("The parity of ");
       for(j=i-1;j>=0;j--)
    {printf("%d",a[j]);}
       printf(" is %d (mod 2).\n",b);}
return 0;
}
