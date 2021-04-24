#include<bits/stdc++.h>
using namespace std;
class base{
    int c,d;
public:
    void set(int a,int b){
    c=a;d=b;}
    void showk(){
    cout<<c<<d;}
};
class derive:public base{
    int k;
public:
    derive(int x){
    k=x;}
    void show(){
    cout<<k;}
};
int main(){
    derive ob(2);
    ob.set(1,2);
    ob.show();
    ob.showk();
    return 0;
}
