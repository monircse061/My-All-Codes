#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,n1,sum=0;
    scanf("%d%d",&n,&n1);
    for(i=0;i<n;i++)
        for(j=0;j<n1;j++)
            {scanf("%d",&a[i][j]);
        sum=sum+a[i][j];}
        printf("%d",sum);
        return 0;
}
