#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],cont=0,sum=0;
    scanf("%d",&n);
    for(int i=1; i<=12; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1,a+13);
    //for(int i=1;i<=12;i++)
    //cout<<a[i]<<" ";
    if(n==0)
    {
        printf("0");
    }
    else
    {
        for(int i=12; i>=1; i--)
        {
            sum+=a[i];
            cont++;
            if(sum>=n)
            { printf("%d",cont);
              return 0;
            }
        }
    printf("-1");
    }
    return 0;
}
