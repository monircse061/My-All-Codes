#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int main() {
    int n,n1,cont=0,num,x=1;
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            x=0;
            break;
        }
    }
    if(x==1){
        printf("1");
    }
    else if(n%2==0){
        printf("2");
    }
    else{
        n1=n-2;x=1;
        for(int i=2;i<=sqrt(n1);i++){
        if(n1%i==0){
            x=0;
            break;
        }
    }
    if(x==1){
        printf("2");
    }
    else{
        printf("3");
    }
    }
    return 0;
}
