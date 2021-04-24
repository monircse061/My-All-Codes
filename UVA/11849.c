#include<stdio.h>
int main()
{
    int a[1000],s[1000],i,j,k,m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {  k=0;
        for(i=0;i<m;i++)
        {scanf("%d",&a[i]);}
    for(j=0;j<n;j++)
    {scanf("%d",&s[j]);}
    for(i=0,j=0;i<m&&j<n;i++,j++)
        {if(a[i]==s[j])
         k++;}
         printf("%d\n",k);}
         return 0;
}
