#include<stdio.h>
int main()
{
    int a[100],i=0,j=0,n;
    while(scanf("%d",&n)&&n!=0)
    {for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  printf("%d %d\n",a[n-2],a[n-1]);}
    return 0;
}
