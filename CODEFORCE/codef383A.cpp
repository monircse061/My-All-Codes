#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,num;
    scanf("%I64d",&n);
    num=n%4;
    if(n==0){
        printf("1");
    }
    else if(num==1)
    {
        printf("8");
    }
    else if(num==2)
    {
        printf("4");
    }
    else if(num==3)
    {
        printf("2");
    }
    else
    {
        printf("6");
    }
    return 0;
}
