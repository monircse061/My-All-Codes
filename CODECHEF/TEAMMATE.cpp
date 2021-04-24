#include<bits/stdc++.h>
using namespace std;

#define ll long long int
//vector<ll>num;
ll ar[100009],num[1000009];
int main()
{
    ll n,t,sum;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);sum=1;
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&ar[i]);
            num[ar[i]]++;
        }
        sort(ar+1,ar+n+1,greater<ll>());
        //sum=(n/2)%1000000007;
        /**for(int i=1; i<=n; i++)
        {
            //cout<<ar[i]<<" ";
            //num[ar[i]]++;
        }**/
        for(int i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                if(num[ar[i+1]]>1&&ar[i]!=ar[i+1])
                {
                    sum+=(num[ar[i+1]]-1);
                    sum=sum%1000000007;
                    i+=(num[ar[i+1]]-1);//cout<<1;
                }
                else if(num[ar[i]]>1)
                {
                    sum+=(num[ar[i]]-2);
                    sum=sum%1000000007;
                    i+=num[ar[i]]-1;//cout<<num[ar[i]]<<" "<<ar[i]<<endl;
                }
            }
            else
            {
                if(num[ar[i-1]]>1&&ar[i]!=ar[i-1])
                {
                    sum+=(num[ar[i-1]]-2);
                    sum=sum%1000000007;
                }
            }
        }
        printf("%lld\n",sum);
        for(int i=1;i<=1000000;i++)
            num[i]=0;
    }
    return 0;
}
