#include<bits/stdc++.h>
using namespace std;
queue<int>q,q1;
int main(){
   int n,m,cont=0,a,b;
   scanf("%d %d",&n,&m);
   for(int i=1;i<=n;i++){
    scanf("%d",&a);
    q.push(a);
   }
   for(int i=1;i<=m;i++){
    scanf("%d",&b);
    q1.push(b);
   }
   for(int i=1;i<=n;i++){
    int c=q.front();
    int c1=q1.front();
    //cout<<c<<" "<<c1;
    if(c<=c1&&!q.empty()&&!q1.empty()){
        cont++;
        q.pop();
        q1.pop();
    }
    else{
        q.pop();
    }
   }
   printf("%d",cont);
   return 0;
}
