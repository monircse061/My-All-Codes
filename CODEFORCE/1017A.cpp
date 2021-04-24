#include<bits/stdc++.h>
using namespace std;
struct abc{
   int u,v;
};
abc e[100009];
bool compare(abc a,abc b){
   return a.v>b.v;
}
int main(){
  int n,a,b,c,d,sum,pos,sum1;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum=a+b+c+d;
    e[i].u=i+1;e[i].v=sum;
    if(i==0)
        sum1=sum;
  }
  sort(e,e+n,compare);
  for(int i=0;i<n;i++){
    if(e[i].v==sum1){
        pos=i+1;
        cout<<e[i].u<<endl;
        break;
    }
  }
  printf("%d",pos);
  return 0;
}
