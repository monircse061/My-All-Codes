#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    scanf("%I64d",&n);
    if(n==0){
        printf("0");
    }
    else if((n+1)%2==0)
    {
        printf("%I64d",(n+1)/2);
    }
    else
    {
        printf("%I64d",n+1);
    }
    return 0;
}
