#include<bits/stdc++.h>
using namespace std;
 long long int a[3*10009],tree[3*10009];
stack<long long int>st;
int main()
{
long long int t,n,area,l,x,j=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);x=-1;
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i=1; i<=n; i++)
        {
            int in=i;
            if(a[i]<a[i-1]&&i>1)
            {
                //in++;
                long long int in1=i-1;
                while((i>1&&a[i]<a[in1])&&!st.empty())
                {
                    l=st.top();
                    st.pop();
                    if(!st.empty())
                    {
                        area=a[l]*(i-st.top()-1);
                    }
                    else
                    {
                        area=a[l]*(i-1);
                    }
                    if(x<area)
                    {
                        x=area;
                    }cout<<x<<" ";
                    in1--;
                    //cout<<1<<" "<<x<<endl;
                }
                if(i<=n)
                {
                    st.push(i);
                }
            }
            else
            {
                st.push(i);
            }
            if(i==n)
            {
                in=i;
                in++;
                while(!st.empty())
                {
                    l=st.top();
                    st.pop();
                    if(!st.empty())
                    {
                        area=a[l]*(in-st.top()-1);
                    }
                    else// if(st.empty())
                    {
                        area=a[l]*(in-1);
                    }
                    if(x<area)
                    {
                        x=area;
                        //
                    }       cout<<x<<" ";             //cout<<2<<" "<<x<<endl;
                }
            }
        }
        j++;
        printf("Case %lld: %lld\n",j,x);
    }
    return 0;
}
