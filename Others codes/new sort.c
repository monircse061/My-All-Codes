#include<stdio.h>
#define val 90000
int main()
{
    int a[val],a1[val],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {

        a1[a[i]]++;
    }
    for(i=0;i<val;i++)
        {for(j=1;j<=a1[i];j++)
    {
        printf("%d\t",i);
    }}

}
