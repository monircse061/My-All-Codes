#include<bits/stdc++.h>
using namespace std;
int totient(int n){
    int ans=n;
    int x=sqrt(n);
    for(int i=2;i<=x;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            ans-=(ans/i);
        }
    }
    if(n>1){
        ans-=(ans/n);
    }
    return ans;

}
int main(){
    int n;
    scanf("%d",&n);
    cout<<totient(n);
    return 0;
}
