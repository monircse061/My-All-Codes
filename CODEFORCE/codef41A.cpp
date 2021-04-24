#include<bits/stdc++.h>
using namespace std;
int cont[10000];
int main(){
     int a[10000],n,m,x;
     scanf("%d %d",&n,&m);
     for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
        cont[a[i]]++;
     }
     x=cont[1];
     for(int i=1;i<=n;i++){
        if(x>cont[i]){
            x=cont[i];
        }
     }
     cout<<x<<endl;
     return 0;
}
