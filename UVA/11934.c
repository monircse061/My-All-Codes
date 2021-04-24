#include<stdio.h>
int main()
{
    int a,b,c,d,l,i,j,n,x;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l)!=EOF)
    {j=0;
    for(x=0;x<=l;x++)
    {
      n=a*x*x+b*x+c;
      if(n%d==0)
        j++;
    }
    printf("%d\n",j);}
    return 0;
}
