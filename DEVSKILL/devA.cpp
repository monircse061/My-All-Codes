#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        if(b==0||a%b!=0||(a==0&&b==0))
            cout<<":kick:"<<endl;
        else if(a%b==0)
            cout<<":wink:"<<endl;
    }
    return 0;
}
