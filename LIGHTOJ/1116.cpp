#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,test,j=0;
    long long a,b,n,y;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lld",&n);
        j++;x=1;
           if(n%2!=0){
            printf("Case %d: Impossible\n",j);
            x=0;
           }
           a=n/2;
           b=2;
           while(a%2==0){
            a=a/2;b=b*2;
           }
        if(x==1)
            printf("Case %d: %lld %lld\n",j,a,b);
    }
    return 0;
}
