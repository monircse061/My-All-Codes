#include<bits/stdc++.h>
using namespace std;
int a[100009],b[100009];
int main()
{
    int n,l=0,l1=0;
    scanf("%d",&n);
    if(n<=2){
        printf("No");
    }
    else if(n%2!=0)
    {   printf("Yes\n");
        printf("1 %d\n",(n/2)+1);
        printf("%d ",n-1);
        for(int i=1; i<=n; i++)
        {
            if((n/2+1)==i)
                continue;
            printf("%d ",i);
        }
    }
    else
    {
        printf("Yes\n");
        printf("%d ",n/2);
        for(int i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                l++;
                a[l]=i;
            }
            else
            {
                l1++;
                b[l1]=i;
            }
        }
        for(int i=1; i<=n/2; i++)
            printf("%d ",a[i]);
            printf("\n");
            printf("%d ",n/2);
        for(int i=1; i<=n/2; i++)
            printf("%d ",b[i]);
    }
    return 0;
}
