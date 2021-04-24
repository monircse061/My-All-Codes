#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,r,co=0,z;
    cin>>x>>y;
    co=co+(y-1);
    r=x-co;
    if((x==0&&y==0)||y==0||(x>0&&y<2))
    {
        cout<<"No"<<endl;
    }
    else
    {
        if(r>=0&&r%2==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
