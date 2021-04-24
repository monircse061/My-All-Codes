#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int main(){
    int n,a[10009],x=INT_MAX,y=-1,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(x>a[i]){
            x=a[i];
        }
        if(y<a[i]){
            y=a[i];
        }
    }
    ans=(y-x+1)-n;
    printf("%d",ans);
    return 0;
}
