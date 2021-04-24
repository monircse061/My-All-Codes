#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        cin>>s;
        int len=s.length();
        if(len<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
        s="";
    }
    return 0;
}
