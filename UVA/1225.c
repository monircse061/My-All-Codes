#include<stdio.h>
int main()
{
    int a[10000],i,j,n,k,l,m,t,b=0,c;
    scanf("%d",&t);
    c=t;
    while(t--)
    {  b++;
    j=0;
        scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i;
        while(k>0)
        {j++;
            a[j]=k%10;
             k=k/10;}
    }
    for(l=0;l<=9;l++)
    {m=0;
        for(i=1;i<=j;i++)
        {
            if(a[i]==l)
                {m++;
                a[l]=m;}}
    }
    for(l=0;l<=9;l++)
    {
        printf("%d ",a[l]);
    }
    if(c!=b)
    {printf("\n");}
    }
    return 0;
}
