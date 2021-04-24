#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[2*100009],x=-1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(x<a[i])
            x=a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(x!=a[i])
        {
                int num=a[i]/x;
                if(x%a[i]==0&&(num%2==0||num%3==0))
                {

                }
                else
                {
                    printf("NO");
                    return 0;
                }
        }
    }
    printf("YES");
    return 0;
}
