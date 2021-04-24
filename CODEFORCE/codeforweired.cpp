#include<bits/stdc++.h>
using namespace std;
int main(){
     long long int a,b,c=0;
    while( scanf("%I64d %I64d",&a,&b)!=EOF){

     while(a>0&&b>0){
           c=0;
        if(a>=2*b){
            c=1;
            a=a%(2*b);
            if(a==0){
                break;
            }
        }
        else if(b>=2*a){
            b=b%(2*a);
            c=1;
            if(b==0){
                break;
            }
        }
        if(c==0){break;}
     }
     cout<<a<<" "<<b<<endl;}
     return 0;
}
