#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b[10000],t,x,n;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
        }
        int x=a[0];
        cout<<x<<" ";
        x++;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==b[i+1])
            {
                cout<<0<<" ";
                continue;
            }

            if(x<=b[i+1])
            {
                if(a[i+1]==a[i]&&a[i+1]<=b[i])
                {cout<<x<<" ";}
                else if(a[i+1]>x){
                    x=a[i+1];
                    cout<<x<<" ";
                }
                else{
                    cout<<x<<" ";
                }x++;
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
