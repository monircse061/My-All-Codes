#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int ar[5*1000002];
ll tot[5*1000002];
void Euler()
{
    int res=5*1000000,n,n1;
    for(int i=2; i<=res; i++)
    {
        ar[i]=i;
    }
    for(int i=2; i<=res; i++)
    {
        if(ar[i]==i)
        {
            for(int j=i; j<=res; j+=i)
            {
                ar[j]-=(ar[j]/i);
            }
        }
    }
    for(int i=2; i<=res; i++)
    {
        tot[i]=(ll)ar[i]*ar[i];//
        //tot[i]*=ar[i];
        tot[i]+=tot[i-1];
        //cout<<tot[i]<<" ";
    }

}
int main()
{

    int t,a,b,Case=0;
    Euler();
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&a,&b);
        Case++;
        printf("Case %d: %llu\n",Case,tot[b]-tot[a-1]);
    }
    return 0;
}
