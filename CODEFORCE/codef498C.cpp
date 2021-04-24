#include<bits/stdc++.h>
using namespace std;
long long int a[2*100009];
int main()
{
    long long int n,sum1=0,x=0,sum2=0,cont=0;
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    if(n==1)
    {
        printf("0");
    }
    else
    {
        for(int i=1,j=n; i<j;)
        {

            if(sum1==sum2)
            {
                x=1;
                sum1+=a[i];
                sum2+=a[j];
            }
            else if(sum1>sum2)
            {

                sum2+=a[j];
            }
            else if(sum2>sum1)
            {

                sum1+=a[i];
            }
            if(sum1>sum2&&i<j)
            {
                j--;
            }
            else if(sum2>sum1&&i<j)
            {
                i++;
            }
            else if(i<j)
            {
                cont=sum1;
                i++,j--;
            }
            if(i>=j)
            {
                break;
            }
        }
        if(x==1)
        {
            printf("%I64d",cont);
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}
