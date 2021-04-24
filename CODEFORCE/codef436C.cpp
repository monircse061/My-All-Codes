#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,f,k,cont=0,e,sum;
    scanf("%I64d %I64d %I64d %I64d",&a,&b,&f,&k);
    e=a-f;
    sum=b;
    for(int i=1; i<=k; i++)
    {
        if(i%2!=0)
        {
            if(sum<f)
            {
                printf("-1");
                return 0;
            }
            if(i==1)
            {
                sum=b-f;
            }
            else
            {
                sum-=f;
            }
            if(sum<e*2&&i!=k)
            {
                sum+=(b-sum);

                cont++;
            }
            else if(i==k)
            {
                if(sum<e)
                {
                    sum+=(b-sum);
                    cont++;
                }
            }
            if(sum<e)
            {
                printf("-1");
                return 0;
            }
            sum-=e;
        }
        else
        {
            if(sum<e)
            {
                cout<<-1;
                return 0;
            }
            sum-=e;
            if(i!=k)
            {
                if(sum<f*2)
                {
                    sum+=(b-sum);
                    cont++;
                }
            }
            else if(i==k)
            {
                if(sum<f)
                {
                    sum+=(b-sum);
                    cont++;
                }
            }
            sum-=f;
        }
    }
    printf("%I64d",cont);
    return 0;
}
