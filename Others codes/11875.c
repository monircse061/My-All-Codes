#include<stdio.h>
int main()
{
    int a[100000],i=0,y,k,j;
    scanf("%d",&y);
    for(i=1; i<=y; i++)
    {
        scanf("%d",&k);
        for(j=0; j<k; j++)

            scanf("%d",&a[j]);

        printf("Case %d: %d\n",i,a[j/2]);
    }
    return 0;
}
