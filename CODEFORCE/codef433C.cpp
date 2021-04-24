#include<bits/stdc++.h>
using namespace std;
long long int a[3*1000009],cont[3*1000009],b[1000009];
int main()
{
    long long int n,k,l=1,x,sum1=0,num,c,sum;
    scanf("%I64d %I64d",&n,&k);
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum=k+l;
        l++;x=1000000000;
        for(int j=0; j<n; j++)
        {
            num=abs(sum-(j+1))*a[j];
            if(x>num)
            {
                x=num;
                c=a[j];
            }
        }
        b[c]=sum;
        cout<<b[c]<<" ";
        sum1+=x;
    }
    for(int i=0;i<n;i++){
        printf("%I64d ",b[a[i]]);
    }
    return 0;
}
