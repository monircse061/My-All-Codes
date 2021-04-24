#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[10000],cont=0,sum=0;
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]+k>5)
        {
            break;
        }
        cont++;
        if(cont%3==0)
        {
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
