#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;
//class derive;
class base
{
public:
    int i,j;
    int  A(int i,int j)
    {
        i=i;
        j=j;
        return i*j;
    }
    float B(int i)
    {
        i=i;
        return pi*i*i;
    }
};
class derive:public base
{
public:
    int k, l;
    int C(int k)
    {
        k=k;
        return k*k;
    }
};

int main()
{
    derive ob1,ob2,ob3;
    float a;
    cout<<ob1.A(5,6)<<endl;
    a=ob2.B(4);
    printf("%.2f\n",a);
    cout<<ob3.C(3)<<endl;
    return 0;
}
