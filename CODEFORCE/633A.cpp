#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c,num;
   scanf("%d %d %d",&a,&b,&c);
   if(a%2==0&&b%2==0&&c%2!=0){
    printf("NO");
   }
   else if(c%a==0||c%b==0){
    printf("YES");
   }
   else{
    for(int i=1;i<=c;i++){
            if(a*i>c){
            break;
        }
        num=abs(a*i-c);
        if(num%b==0){
            printf("YES");
            return 0;
        }

    }
    printf("NO");
   }
   return 0;
}
