#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j=0,test,x;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&n);
        i=0;
        while(n>0){
            x=n%2;
        if(x==1)
            {i++;}
            n=n/2;
        }
        j++;
        if(i%2==0)
            printf("Case %lld: even\n",j);
        else
            printf("Case %lld: odd\n",j);
    }
    return 0;
}




