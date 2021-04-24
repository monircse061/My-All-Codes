#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cont=0,num;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        if(m%i==0){
               num=m/i;
            if(num<=n){
                cont++;
            }
        }
    }
    printf("%d",cont);
    return 0;
}
