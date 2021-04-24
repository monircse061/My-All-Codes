#include<bits/stdc++.h>
using namespace std;
class Box{
   public:
       double length;
       double breadth;
       double height;
       void set(int a,int b,int c){
       length=a;breadth=b;height=c;
       }
   void print(){cout<<"volume"<<" "<<length*breadth*height;}
};
int main(){
   Box ob;
   int a,b,c;
   cout<<"Enter length,breadth,height"<<endl;
   cin>>a>>b>>c;
   ob.set(a,b,c);
   ob.print();
   return 0;
}
