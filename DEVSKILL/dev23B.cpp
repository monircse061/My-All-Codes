#include<bits/stdc++.h>
using namespace std;
 int a[100009];
int main()
{
    int t,n,num,d,j=0,num1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        num=a[0]; num1=INT_MIN;
        for(int i=1; i<n; i++)
        {
            d=num-a[i];
            num1=max(d,num1);
            num=max(num,a[i]);
        }
        j++;
        printf("Case %d: %d\n",j,num1);
    }
    return 0;
}
