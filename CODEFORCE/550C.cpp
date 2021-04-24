#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;int num,num1;
   for(int i=0;i<s.length();i++){
    if(s[i]-48==0){

       printf("YES\n0");
       return 0;
    }
    else if(s[i]-48==8){
        printf("YES\n8");
        return 0;
    }
   }
   for(int i=0;i<s.length()-1;i++){
    for(int j=i+1;j<s.length();j++){
        num=(s[i]-48)*10+(s[j]-48);
        if(num%8==0){
            printf("YES\n%d",num);
            return 0;
        }
        for(int k=j+1;k<s.length();k++){
            num1=num*10+(s[k]-48);
            if(num1%8==0){
                printf("YES\n%d",num1);
                return 0;
            }
        }
    }
   }
   printf("NO");
   return 0;
}
