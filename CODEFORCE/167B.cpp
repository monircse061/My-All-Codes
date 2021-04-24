#include<bits/stdc++.h>
using namespace std;
int cont[100000009],a[100009];
int main()
{
    int n,sum=0,m,num=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        sum=0;
        m=a[i];
        while(m>0)
        {
            int p=m%2;
            if(p!=0)
            {
                sum++;
            }
            m/=2;
        }
        cont[sum]++;
    }
    for(int i=1; i<=n; i++)
    {

        num+=(cont[i]*(cont[i]-1)/2);
    }
    printf("%d",num);
    return 0;
}
