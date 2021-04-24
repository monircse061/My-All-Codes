#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,mod,num,od,ev;
    scanf("%I64d",&n);
    mod=n%2;
    if(mod!=0)
    {
        num=(n/2);
        od=(num+1)*(num+1);
        ev=num*(num+1);
        printf("%I64d",ev-od);
    }
    else
    {
        num=n/2;
        od=num*num;
        ev=num*(num+1);
        printf("%I64d",ev-od);
    }
    return 0;
}
