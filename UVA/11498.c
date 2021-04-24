#include<stdio.h>
int main()
{
    int a[1000],s[1000],n,i,j,m,k,c,b;
    while(scanf("%d",&n)&&n!=0)
    {  scanf("%d%d",&m,&k);
        for(i=0;i<n;i++)
    {scanf("%d%d",&a[i],&s[i]);}
    for(i=0;i<n;i++)
        {c=a[i]-m;
        b=s[i]-k;
    if(c>0&&b>0)
            printf("NE\n");
    else if(c>0&&b<0)
        printf("SE\n");
    else if(c<0&&b<0)
        printf("SO\n");
    else if(c<0&&b>0)
        printf("NO\n");
    else if(c==0||b==0)
        printf("divisa\n");}}
     return 0;
}
