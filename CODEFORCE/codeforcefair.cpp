#include<bits/stdc++.h>
using namespace std;
int main(){
   int m,n,i,j,x,y,l;char a[1000];char b[1000];

   scanf("%d %d",&m,&n);
    scanf("%s",a);
    getchar();
    for(j=1;j<=n;j++){
    scanf("%d %d",&x,&y);
    getchar();
   gets(b);
   for(i=x;i<=y;i++){
    if(b[0]==a[i-1]){a[i-1]=b[2];}
   }}
   cout<<a;
   return 0;
}
