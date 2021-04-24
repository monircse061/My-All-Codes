#include<stdio.h>
int main()
{
    int a[100000];int i,j,n,k=0,x,y;
    while(scanf("%d",&n)&&n!=0)
    {
        x=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            x=x+a[i];
        } y=x/n;
        j=0;
        for(i=0; i<n; i++)
        {
            if(a[i]>y)
                j=j+(a[i]-y);
        }
        k++;
        printf("Set #%d\n",k);
        printf("The minimum number of moves is %d.\n\n",j);
    }
    return 0;
}

