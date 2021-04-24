#include<stdio.h>
#define val 90000
int main()
{
    int a[val],i,j,n;
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(a[i]==0)
        for(j=2;i*j<=n;j++)
        {

            a[i*j]=1;
        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==0)
        printf("%d\t",i);
    }
}
