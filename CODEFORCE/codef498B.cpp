#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[2*10009],b[2*10009],c[2*10009],d[2*10009];
    long long int n,k,cont=1,sum=0,tem=0;
    scanf("%I64d %I64d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
        b[i]=a[i];
    }
    sort(b+1,b+n+1);
    int j=1;
    for(int i=n; i>=1; i--)
    {
        c[j]=b[i];
        //cout<<b[i]<<" ";
        j++;
        if(j>k)
        {
            break;
        }
    }
    int l=0,l1=1;
    for(int i=1; i<=n; i++)
    {
        //cout<<a[i]<<" ";
        for(int j=1; j<=k; j++)
        {
            if(a[i]==c[j])
            {
                sum+=c[j];//cout<<tem<<" "<<i<<endl;
                if(l1==k)
                {
                    d[l1]=n-tem;
                }
                else
                {
                    d[l1]=i-tem;
                }
                cont=1;
                tem=i;
                l1++;
                c[j]=0;
                break;
            }
            //else
            {
                ///cont++;
            }
        }
    }
   printf("%I64d\n",sum);
    for(int i=1; i<=k; i++)
    {
        printf("%I64d ",d[i]);
    }
    return 0;

}
