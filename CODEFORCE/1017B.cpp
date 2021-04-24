#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s,s1;
    ll n,one=0,zero=0,cont=0;
    scanf("%I64d",&n);
    cin>>s>>s1;
    for(int i=0; i<n; i++)
    {
        if(s[i]-48==0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }//cout<<zero<<one;
    for(int i=0; i<n; i++)
    {
        if(s1[i]-48==0&&s[i]-48==0)
        {
            cont+=one;
            zero--;
        }
        else if(s1[i]-48==0&&s[i]-48==1)
        {
            cont+=zero;
            one--;
        }
    }
    printf("%I64d",cont);
    return 0;
}
