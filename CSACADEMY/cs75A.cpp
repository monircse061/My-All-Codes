#include<bits/stdc++.h>
using namespace std;
int main()
{
    double d,t,v1,v2,d1,a,s,s1,v3,t1,t2;
    cin>>d>>t>>v1>>v2;
    if(v2-v1>0)
    {
        d1=d+(t*(v2-v1));
        t1=(d1/v1)+t;
    }
    else if(v2-v1==0)
    {
        t1=(d/v1)+t;
    }
    else if(v2-v1<0)
    {
        v3=v1-v2;
        s=v3*t;
        s1=d-s;
        if(s>=d){
            t1=d/v3;
        }
        else{
            t1=(s1/v1)+t;
        }

    }
    t2=floor(t1);
    if(t2==t1)
    {
        cout<<t2;
    }
    else
    {
        cout<<t2+1;
    }
    return 0;
}
