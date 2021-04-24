#include<bits/stdc++.h>
using namespace std;
class base1{
   public:
       int x;
    void show(){
    cout<<x<<endl;}

};
class base2{
public:
    int y;
    void show1(){
    cout<<y<<endl;}
};
class derive:public base1,public base2{
    public:
    void set(int a,int b){
    x=a;y=b;}
};
int main(){
   derive ob;
   ob.set(3,5);
   ob.show();
   ob.show1();
   return 0;
}
