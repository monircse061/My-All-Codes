#include<stdio.h>
int main()
{
    int a[100],n,i,t,j=0;
    scanf("%d",&t);
    while(t--)
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j++;
    printf("case %d:%d",j,a[(n-1)/2]);
    return 0;
}
