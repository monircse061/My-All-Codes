#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0,cont=0,sum1;
    scanf("%d %d",&n,&m);
    int t=3600*20;
    for(int i=1;i<=n;i++){
        sum+=(5*i)*60;
        sum1=t+(m*60)+sum;
        if(sum1>86400){

            break;
        }
        cont++;
    }
    printf("%d",cont);
    return 0;
}
