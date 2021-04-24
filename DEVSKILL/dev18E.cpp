#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            x=n/2;
            {
                cout<<x+1<<endl;
            }
        }
    }
    return 0;
}
