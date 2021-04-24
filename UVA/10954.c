#include<stdio.h>
int main()
{
    int a[1000],x[1000];int i,j,l,n,y=0,s;
    while(scanf("%d",&s)&&s!=0)
    {  l=0;y=0;
        for(i=0;i<s;i++)
        {scanf("%d",&a[i]);}
        for(i=0;i<s;i++)
    {y=y+a[i];
    x[i]=y;}
    for(j=0;j<s;j++)
    {l=l+x[j];}
    printf("%d\n",l-1);}
    return 0;
}
