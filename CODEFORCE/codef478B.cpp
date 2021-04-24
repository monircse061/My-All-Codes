#include<bits/stdc++.h>
using namespace std;
long long int b[1000],a[1000];
void fun()
{
    for(int i=1; i<=14; i++)
    {
        b[i]=a[i];
    }

}
int main()
{
    long long int sum,x=-100000,d;
    for(int i=1; i<=14; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=1; i<=14; i++)
    {
        fun();
        int index=0;
        long long int j=a[i]/14;
        sum=0;
        b[i]=0;
        if(j>0)
            for(int i=1; i<=14; i++)
            {
                b[i]+=j;
            }
        d=a[i]%14;
        if(d>0)
        {
            for(int l=i+1; l<=i+d; l++)
            {
                if(l>14)
                {
                    index++;
                    b[index]+=1;
                    continue;
                }
                b[l]+=1;
            }
        }
        for(int i=1; i<=14; i++)
        {
            if(b[i]%2==0)
            {
                sum+=b[i];
            }
        }
        //for(int i=1; i<=14; i++)
        {
            //cout<<b[i]<<" ";
        }
        //cout<<endl;
        if(x<sum)
        {
            x=sum;
        }
    }
    cout<<x<<endl;
    return 0;
}
