#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,z=0,o=0,Min;
    scanf("%d",&n);
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    Min=min(z,o);
    cout<<n-(Min*2);
    return 0;
}
