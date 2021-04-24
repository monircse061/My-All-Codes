#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,mod,odd,ev,num;
    scanf("%I64d %I64d",&n,&k);
    mod=n%2;
    if(mod!=0)
    {
        odd=(n/2)+1;
        ev=n/2;
    }
    else
    {
        odd=n/2;
        ev=n/2;
    }
    if(k<=odd)
    {
        num=k+(k-1);
    }
    else
    {
        num=2*(k-(odd+1)+1);
    }
    printf("%I64d",num);
    return 0;
}
