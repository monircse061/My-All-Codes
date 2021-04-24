#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10000],i,j=1,x,y,n,l;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        scanf("%d",&a[i]);
        j++;
        if(a[i]>1){
            a[a[i]]=0;
            a[i]=0;
        }
        else{
          a[i]=j;
        }
    }
    for(i=2;i<=n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
