#include<stdio.h>
#include<string.h>
int main(){
     int i,x,a,n,ln;
     char s[1000];
     scanf("%[^\n]",s);
     scanf("%d",&n);
     x=0;
     for(i=0;s[i];i++){
        x=(x*10)+(s[i]-'0');
        x=x%n;

     }

     printf("%d",x);
     return 0;
}
