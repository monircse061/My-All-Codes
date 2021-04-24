#include<stdio.h>
int main(){
    long long a,b,c;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        c=(a+b)/2;
        printf("%lld\n",c);
    }
    return 0;
}
