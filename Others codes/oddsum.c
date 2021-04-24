#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,n1,p=0,m=0;
    scanf("%d%d",&n,&n1);
    for(i=0;i<n;i++)
        for(j=0;j<n1;j++)
        {scanf("%d",&a[i][j]);
    if(a[i][j]==0)
        break;
    else if(a[i][j]>0)
       p++;
    else
        m++;}
    printf("%d\n%d",p,m);
    return 0;
}
