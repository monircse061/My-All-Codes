#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,j,k,l=0;
   char s[10000];
   scanf("%[^\n]",s);
   for(i=0;s[i]!='\0';i++){
    if(s[i]=='Q')
    for(j=i+1;s[j]!='\0';j++){
        if(s[j]=='A')
        for(k=j+1;s[k]!='\0';k++){
            if(s[k]=='Q')
                l++;
        }
    }
   }
   printf("%d\n",l);
   return 0;
}
