#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100009];
    int n,r;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
      for(int i=0;i<n;i++){
        if(a[i]%2==0){
            a[i]=a[i]-1;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
