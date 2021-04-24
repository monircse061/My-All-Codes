#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
int main()
{
    long long int n,sum,i,j,cont,b,c,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum=0;
        i=1;
        j=0;
        cont=0;
        while(n>=sum)
        {
            sum+=i;
            a[j]=sum;
            i++;
            j++;
        }
        for(int i=0; i<j; i++)
        {
            cont++;
            if(a[i]==n)
            {
                cout<<cont<<endl;
                break;
            }
            if(a[i]>n)
            {
                b=abs(n-a[i])+cont;
                if(1)
                {
                    cont--;
                    c=abs(n-a[i-1])+cont;
                }
                if(b<c)
                    cout<<b<<endl;
                else
                    cout<<c<<endl;
            }
        }
    }
    return 0;
}
