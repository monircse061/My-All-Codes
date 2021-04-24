#include<bits/stdc++.h>
using namespace std;
#define Max INT_MAX
struct abc{
     int u,v;
};
abc e[100009];
bool compare(abc a,abc b){
   return a.v<b.v;
}
int main(){
      int t,n,p,x,j=0;
     scanf("%d",&t);
     while(t--){
        scanf("%d %d",&n,&p);
        x=Max;
        for(int i=0;i<n;i++){
            scanf("%d %d",&e[i].u,&e[i].v);
        }
        sort(e,e+n,compare);
        for(int i=0;i<=n-p;i++){
                 int cont=1,sum=0,y=0;
            for(int j=i+1;j<n;j++){
                if(e[i].v>=e[j].u&&e[i].v<=e[j].v){
                    cont++;
                }
                else{
                    int Min=min(e[j].u,e[j].v);
                    sum=abs(e[i].v-Min);cont++;
                    if(y<sum){
                        y=sum;
                    }
                }
                if(cont==p){
                    if(x>y){
                        x=y;
                    }
                    break;
                }
            }
        }j++;
        if(p!=1)
           printf("Case %d: %d\n",j,x);
        else
            printf("Case %d: 0\n",j);
     }
     return 0;
}
