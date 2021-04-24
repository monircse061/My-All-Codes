#include<bits/stdc++.h>
using namespace std;
#define ll long long int
long long int bigmod(ll a,ll b,ll m){
    if(b==0){return 1%m;}
    ll x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*a)%m;
    return x;
}
/****
   int Exponentiation(int a,int b,int m){
        if(b==0)
            return 1%m;
        else if(b%2==0){
            return a*Exponentiation(a*a%m,b/2,m);
        }
        else{
            return a*Exponentiation(a*a%m,(b-1)/2,m);
        }
   }


   ****/
int main(){
    long long int a,b,m;
    scanf("%lld %lld %lld",&a,&b,&m);
    printf("%lld^%lld mod %lld=%lld",a,b,m,bigmod(a,b,998244353));
    return 0;}
