#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100005];
    int t,x,y,z,cont,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        cont=0;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            if(i!=0){
                x=((a[0]%10)*(a[i]%10))%10;
                if(x==0)
                    cont++;
            }
        }

        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                x=(((a[i]%10)*(a[j]%10))%10);
                if(x==0)
                {
                    cont++;
                }
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}
