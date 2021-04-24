#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,n1,l=0,h=0,x=0,n2;
    scanf("%I64d %I64d",&n,&m);
    n1=n/2;
    l=n1/(m+1);
    if(l!=0)
    {
        printf("%I64d %I64d %I64d",l,l*m,n-(l+l*m));
    }
    else{
        printf("0 0 %I64d",n);
    }
    return 0;
}
