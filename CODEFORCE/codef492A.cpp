#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100],sum=0;
    scanf("%d",&n);
    a[0]=1;
    a[1]=5;
    a[2]=10;
    a[3]=20;
    a[4]=100;
    for(int i=4;i>=0;i--){
        if(n>=a[i]){

            sum+=(n/a[i]);
             n-=(a[i]*(n/a[i]));
        }
    }
    cout<<sum;
    return 0;
}
