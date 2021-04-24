#include<stdio.h>
#include<math.h>
int main(){
    long long a,b;int test,j=0;
    scanf("%d",&test);
    while(test--){
        scanf("%lld%lld",&a,&b);
        j++;
        printf("Case %d: %lld %lld\n",j,a|b,a&b);
    }
    return 0;
}
