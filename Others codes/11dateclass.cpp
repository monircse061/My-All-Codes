#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A(int a){
    cout<<"A"<<"=="<<a*a<<endl;}
};
class B{
   public:
       B(int b,int c){
       cout<<"B"<<"=="<<b*c<<endl;}
};
class C:public A,public B{

    public:
   C(int a,int b,int c):A( a),B(b,c){
       cout<<"C"<<"=="<<a*b*c<<endl;;
   }
};
int main(){
   C object(1,2,3);

}
