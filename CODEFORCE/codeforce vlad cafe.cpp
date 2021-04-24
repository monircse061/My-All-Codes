#include<bits/stdc++.h>
using namespace std;
#define val 10000000
#define va 1000000
int a[va*2],b[val],c[val];
int main(){
  int  n,i,j,k,l;
  scanf("%d",&n);

        j=0;k=0;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    b[a[i]]++;
    if(b[a[i]]==1)
        j++;
  }
  for(l=n-1;l>=0;l--){

    c[a[l]]++;
    if(c[a[l]]==1)
        {k++;}
        if(k==j){printf("%d\n",a[l]);
        break;
       }
  }
  return 0;
}
