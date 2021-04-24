#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],sum=0,num;
    scanf("%d",&n);
    num=n;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        printf("NO");
    }
    else
    {
        if(a[0]%2!=0&&a[n-1]%2!=0){
             printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}
