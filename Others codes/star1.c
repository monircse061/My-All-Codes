#include<stdio.h>
main()
{
    int i,j,k,l,n[100],c,T;
    scanf("%d",&T);
    while(T--)
    {scanf("%d",&l);
    for(i=0;i<l;i++)
    {scanf("%d",&n[i]);}
    for(j=l-2;j>=0;j=j-2)
        {if(n[j]%2!=0&&n[j+1]%2==0)
        {k=n[j];
    n[j]=n[j+1];
    n[j+1]=k;}
    printf("%d %d ",n[j+1],n[j]);}}

    return 0;
}
