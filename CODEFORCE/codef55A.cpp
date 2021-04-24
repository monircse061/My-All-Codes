#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int u=0,l=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            l++;
        }
        else
        {
            u++;
        }
    }
    if(l>u||l==u)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]+=32;
            }
            cout<<s[i];
        }
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]-=32;
            }
            cout<<s[i];
        }
    }
    return 0;
}
