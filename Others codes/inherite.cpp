#include<bits/stdc++.h>
using namespace std;

class base{
    int a,b;
 public:
    void set(int c,int d){
    a=c;b=d;}
   void look(){
    cout<<a<<" "<<b;}

};

class derive:private base{
    int k;
public:
    derive (int x){
    k=x;}
    void sat()
    {
        set(50,60);
    }
    void look1(){
   look(); }

    void sw(){
    cout<<k<<endl;}
};
int main(){
    derive ob(40);
    ob.sat();
    ob.sw();
    ob.look1();

    return 0;
}
