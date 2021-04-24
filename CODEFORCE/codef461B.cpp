#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    int n,x,cont=0;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            x=i^j;
            //cout<<x<<" ";
            if(x<=n&&x>0&&x>=j&&i+j>x)
            {
                a[x]++;
                cont++;
            }
        }
    }
    cout<<cont<<endl;
    return 0;
}
