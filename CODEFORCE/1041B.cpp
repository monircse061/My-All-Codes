#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b,x,y,cont=0,ans,x1,y1,ck=1,num;
    scanf("%I64d %I64d %I64d %I64d",&a,&b,&x,&y);
     num=std::__gcd(x,y);
    if(num>1){
        x/=num;
        y/=num;
    }
    x1=a/x;
    y1=b/y;
    printf("%I64d",min(x1,y1));
    return 0;
}
