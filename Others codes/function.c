#include<stdio.h>
#include<ctype.h>
int prime(int n)
{
    int i,x=1;
    if(n==1)
        return 0;

  for(i=2;i<n;i++)
  {
      if(n%i==0)
        x=0;
  }
  if(x==0)
    return 0;
  else
    return 1;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    a=prime(n);
    if(a==0)
    printf("no");
    else
        printf("yes");
    return 0;
}
