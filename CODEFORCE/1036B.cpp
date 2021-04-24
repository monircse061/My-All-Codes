#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll q,n[10000],m[10000],k[10000],sum,x1,y1,x,y;
    scanf("%I64d",&q);
    for(int i=1; i<=q; i++)
    {
        sum=0;
        x1=0,y1=0,x=0,y=0;
        scanf("%I64d %I64d %I64d",&n[i],&m[i],&k[i]);
        while(sum<k[i]&&abs(n[i]-x)>1&&abs(m[i]-y)>1)
        {
            if(n[i]-x>1&&m[i]-y>1)
            {
                x++,y++;
                sum++;
            }
            else if(n[i]-x>1&&m[i]-y<=1)
            {
                x++;
                sum++;
            }
            else
            {
                y++;
                sum++;
            }
            //if(x1!=x&&y1!=y){
            // }
        }
        if(sum>=k[i]||n[i]>k[i]||m[i]>k[i]){
            printf("-1");
            return 0;
        }
        else if(abs(sum-k[i])>1&&sum>=k[i]-sum){
             sum+=(k[i]-sum);
        }
        else if(abs(sum-k[i])>1&&n[i]!=m[i])
        {
            sum+=(k[i]-1-sum);
        }
        printf("%I64d\n",sum);
    }
    return 0;
}
