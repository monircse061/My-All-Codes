#include<bits/stdc++.h>
using namespace std;

 class abc{
    int a,b;
public:
    abc(){
    a=0;b=0;}
    abc(int c,int d){
        a=c;b=d;
    }
    void print(){
    cout<<a<<" "<<b;}
   friend abc operator+(abc ob,abc ob1){
     abc vag;
     vag.a=ob.a+ob1.a;
     vag.b=ob.b+ob1.b;
     return vag;
 }
 };

 int main(){
      abc n1(1,2),n2(3,4),n3;
      n3=n1+n2;
      n3.print();
      return 0;
 }
