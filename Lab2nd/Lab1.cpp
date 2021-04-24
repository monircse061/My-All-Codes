#include<bits/stdc++.h>
using namespace std;
int a[10000],l,r;
int left(int n)
{
    return 2*n;
}
int right(int n)
{
    return 2*n+1;

}
void fun(int n){
    int large;
    l=left(n);
    r=right(n);
   if(l<=9&&a[l]>a[n]){
    large=l;
   }
   else{
    large=n;
   }
   if(r<=9&&a[r]>a[large]){
    large=r;
   }
   if(large!=n){
    int c=a[n];
    a[n]=a[large];
    a[large]=c;
    fun(large);
   }
}
int main(){
     for(int i=1;i<=9;i++){
        scanf("%d",&a[i]);
     }
     fun(2);
     for(int i=1;i<=9;i++){
        cout<<a[i]<<" ";
     }

     return 0;
}
