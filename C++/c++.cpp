#include<bits/stdc++.h>
using namespace std;
class abc{
    int a,b,arr[5];
    public:
    abc(){a=0;b=0;}
    abc(int c,int d){a=c;b=d;}
    abc(int c){a=c;b=0;}
    void print(){
    cout<<a<<" "<<b<<endl;}
   operator int(){int n;
   n=a+b;}

};
int main(){
    abc n1(1,2);
    int n;
    n=n1;
    cout<<n<<endl;
    return 0;
}
