#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int a[100009],n,m,x,y,z,n1,p,p1;
  scanf("%I64d %I64d",&n,&m);
  for(int i=1;i<=m;i++){
    scanf("%I64d",&a[i]);
    x=n%a[i];
    p=n/a[i];
    if(i==1){
       y=x;p1=p;n1=i;
       continue;
    }
    if(y>x){
        y=x;
        p1=p;n1=i;
    }
  }
  cout<<n1<<" "<<p1<<endl;
  return 0;
}
