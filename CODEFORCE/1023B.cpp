#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,m,sum=0,ans=0,num=0;
    scanf("%I64d %I64d",&n,&m);
    if(m<=n){
        sum=(m-1);
        ans=sum/2;
    }
    else{
        sum=abs(n-m);
        num=n-sum;
        if(sum>n){
            ans=0;
        }
         else if(num%2==0){
            ans=num/2;
        }
        else{
            ans=(num/2)+1;
        }
    }
    printf("%I64d",ans);
    return 0;
}
