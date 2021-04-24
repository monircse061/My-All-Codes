#include<stdio.h>
int main()
{
    int a,b,c,i,sum,t,j=0;
    scanf("%d",&t);
    while(t--)
        {scanf("%d%d",&a,&b);
    sum=0;
    for(i=a;i<=b;i++)
        if(i%2!=0)
        {sum=sum+i;}
        j++;
    printf("Case %d: %d\n",j,sum);}
    return 0;
}
