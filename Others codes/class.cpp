#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;
class base{
    public:
  int i,j;
  int A(int i,int j){

       i=i;j=j;
       return i*j;
    }
    float B(int i){
        i=i;
        return pi*i*i;
    }
};
class derive:public base{
public:
    int k;
    int C(int k){
        k=k;
        return k*k;
    }

};
int main(){
    derive ob1,ob2,ob3;float b;int a,c,m,n;
    cin>>a>>c;
    cout<<ob1.A(a,c)<<endl;
    cin>>m;
    b=ob2.B(m);
    printf("%.2f\n",b);
    cin>>n;
    cout<<ob3.C(n)<<endl;

}
