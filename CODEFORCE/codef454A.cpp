#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2,a,b,x,y;
    cin>>v1>>v2>>a>>b;
    if(v2*2<=b*2)
    {
        cout<<-1<<endl;
    }
    else if(a*2<b)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(a<b)
        {
            cout<<v1*2<<" "<<v2*2<<" "<<a*2;
        }
        else
        {
            cout<<v1<<" "<<v2<<" "<<a;
        }
    }

return 0;
}
