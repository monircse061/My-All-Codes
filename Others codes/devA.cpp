#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
   int test,i,j,n,ln,k;

   char s[10000];
   scanf("%d",&test);
   while(test--){
        n=0;k=0;
   scanf("%d",&ln);
   getchar();
   scanf("%s",s);

   for(i=0;i<ln;i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            j=0;
        while(j<1){
            i++;
            j++;
    if(s[i]=='\0')
    {break;}
    if(j==1) {
        n++;
    }
        }
   }}k++;
   printf("Case %d: %d\n",k,n);}
   return 0;
}
