#include<stdio.h>
int main()
{
    int n,t,i,j=0,n1,n2;
    scanf("%d",&t);
    while(t--)
    {
        j++;
        scanf("%d",&n);
        scanf("%d",&n1);
        for(i=1; i<n; i++)
        {
            scanf("%d",&n2);
            if(n1<n2)
                n1=n2;
        }

        printf("Case %d: %d\n",j,n1);
    }
    return 0;
}
