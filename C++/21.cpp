#include<bits/stdc++.h>
using namespace std;
//int add(int a,int b){
//return a+b;
template<class t>
t add(t &a,t &b){
t tem;
tem=a;
a=b;
b=tem;}
int main(){
    int a=3,b=4;
    add(a,b);
   cout<<a<<" "<<b<<endl;
   //cout<<add(1.2,4.3)<<endl;
   //string s1="refat",s2="rabby";
   //add("refat");
    return 0;
}
