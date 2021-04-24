#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,res;
    scanf("%I64d",&n);
    res=(n*(n+1))/2;
    if(res%2==0){
        printf("0\n");
    }
    else{
        printf("1\n");
    }
    return 0;
}
