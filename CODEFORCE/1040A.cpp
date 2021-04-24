#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,ar[100],cost=0;
  scanf("%d %d %d",&n,&a,&b);
  for(int i=1;i<=n;i++){
    scanf("%d",&ar[i]);
  }
  if(n==1){
     if(ar[1]==2){
        int c=min(a,b);
        printf("%d",c);
     }
     else{
        printf("0");
     }
  }
  else if(ar[1]!=2&&ar[n]!=2&&ar[1]!=ar[n]){
    printf("-1");
  }
  else{
    for(int i=1,j=n;i<=j;i++,j--){
        if(ar[i]==2&&ar[j]==2){
                if(i!=j)
          cost+=2*min(a,b);
        else{
             cost+=min(a,b);
        }
        }
        else if(ar[i]!=2&&ar[j]!=2&&ar[i]!=ar[j]){
            printf("-1");
            return 0;
        }
        else{
            if(ar[i]!=2&&ar[j]==2){
                if(ar[i]==1){
                   cost+=b;
                }
                else{
                   cost+=a;
                }
            }
            else if(ar[j]!=2&&ar[i]==2){
                 if(ar[j]==1){
                   cost+=b;
                }
                else{
                   cost+=a;
                }
            }
        }
    }
    printf("%d",cost);
  }
  return 0;
}
