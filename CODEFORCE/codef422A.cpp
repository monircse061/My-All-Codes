#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A,B,Min,mul=1;
    scanf("%I64d %I64d",&A,&B);
    Min=min(A,B);
    for(int i=2; i<=Min; i++)
    {
        mul*=i;
    }
    printf("%I64d",mul);
    return 0;
}
