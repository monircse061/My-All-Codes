#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b;
    scanf("%I64d %I64d",&a,&b);
    if(a==2&&b==3){
        printf("<");
    }
    else if(a==3&&b==2){
        printf(">");
    }
    else if((a==2&&b==4)||(a==4&&b==2)){
        printf("=");
    }
    else if(a==1&&b==1){
        printf("=");
    }
    else if(a==1){
        printf("<");
    }
    else if(b==1){
        printf(">");
    }
    else if(a<b){
        printf(">");
    }
    else if(a>b){
        printf("<");
    }
    else{
        printf("=");
    }
    return 0;
}
