#include<bits/stdc++.h>
using namespace std;
deque<int>card1,card2;
int main(){
   int n,k1,k2,a[100],b[100],value1,value2,cont=0,man,x=1;
   scanf("%d",&n);
   scanf("%d",&k1);
   for(int i=1;i<=k1;i++){
    scanf("%d",&a[i]);
    card1.push_back(a[i]);
   }
   scanf("%d",&k2);
   for(int i=1;i<=k2;i++){
    scanf("%d",&b[i]);
    card2.push_back(b[i]);
   }
   while((!card1.empty())&&(!card2.empty())){
    value1=card1.front();
    value2=card2.front();
    if(value1>value2){
        card1.pop_front();
        card2.pop_front();
        card1.push_back(value2);
        card1.push_back(value1);
        man=1;
    }
    else{
        card2.pop_front();
        card1.pop_front();
        card2.push_back(value1);
        card2.push_back(value2);
        man=2;
    }
    cont++;
    if(cont==10000){
        x=0;
        break;
    }
   }
   if(x==0){
     printf("-1");
   }
  else{
    printf("%d %d",cont,man);
  }
   return 0;
}
