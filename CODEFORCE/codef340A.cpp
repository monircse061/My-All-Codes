#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mod;
    scanf("%d",&n);
    mod=n%5;
    if(mod!=0)
    {
        printf("%d",(n/5)+1);
    }
    else
    {
        printf("%d",n/5);
    }
    return 0;
}
