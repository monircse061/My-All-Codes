#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[2*100009],x,A;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    A=a[1];
    for(int i=2; i<=n; i++)
    {
        x=std::__gcd(A,a[i]);
        A=x;
    }
    for(int i=1; i<=n; i++)
    {
        a[i]/=A;
        while(a[i]%2==0)
        {
            a[i]/=2;
        }
        while(a[i]%3==0)
        {
            a[i]/=3;
        }
        if(a[i]>1)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
