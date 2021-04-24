#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>m;
int main(){
      ll n,a[100009],x=1;
      scanf("%I64d",&n);
      for(int i=1;i<=n*2;i++){
        scanf("%I64d",&a[i]);
        m[a[i]]++;
        if(m[a[i]]>=(n*2)/2){
            x=0;
        }
      }
      if(x==0||n==1){
        printf("0");
        return 0;
      }
      sort(a+1,a+n*2+1);
      //for(int i=1;i<=n*2;i++)
        //cout<<a[i]<<" ";
      ll d1=a[n]-a[1];
      ll d2=a[n*2]-a[n+1];
      printf("%I64d",d1*d2);
      return 0;
}
