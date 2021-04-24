#include<bits/stdc++.h>
using namespace std;
#define val 10000
int a[val],i,j=0,n,p=0;
int main(){
  scanf("%d",&n);
  for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        sort(a,a+n);
  for(i=n-1;i>=0;i--){
    for(j=i-1;j>=0;j--){
        if((a[i]>a[j])&&a[i]!=0&&a[j]!=0){
            a[i]=a[j];
            a[j]=0;
        }
    }if(a[i]!=0){
            p++;

        }}

    printf("%d\n",p);
 return 0;
}
