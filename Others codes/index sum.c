#include<stdio.h>
#define val 90000
int main()
{
    int a[val],i,j,p,q,n,m;
    scanf("%d",&n);

    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        a[i]+=a[i-1];

    }
     for(j=1;j<=m;j++)
     {scanf("%d%d",&p,&q);
    printf("%d\n",(a[p]-a[p-1])+(a[q]-a[p]));}
  return 0;
}
