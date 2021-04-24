#include<bits/stdc++.h>
using namespace std;
int i,j,n,k,l,m,m1,x=0,y=0;
int main(){
    scanf("%d",&n);

    for(j=1;j<=n;j++){
        scanf("%d %d",&m,&m1);
        if((m<0&&m1<0)||(m<0&&m1>=0))
            x++;
        else
            y++;
   }
   if(x>1&&y>1)
    cout<<"NO\n";
   else
    cout<<"YES\n";
   return 0;
}
