#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m,x,y,z,t;
   scanf("%d %d",&n,&m);
   z=m;
   while(1){
       x=n%10;
       if(x<=m)
       {n=n-x;}
       if(x>m){
        n=n-m;
       }
       m=(m-x);
       if(x==0){
        n/=10;
        m--;
       }//cout<<n<<" "<<m<<endl;
       if(m<=0||n==0){
        cout<<n;
        break;
       }
   }
   return 0;
}
