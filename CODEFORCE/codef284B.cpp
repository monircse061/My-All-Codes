#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l=1;
    string s[3*10009],s1[3*10009],s2[3*10009],s4,s5,s6;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=m*2;)
    {
        cin>>s[i]>>s[i+1];
        i+=2;
    }
    for(int i=1; i<=n; i++)
    {
        cin>>s1[i];
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=2*m;)
        {
            if(s[j]==s1[i]||s[j+1]==s1[i])
            {
                if(s[j].length()<=s[j+1].length())
                {
                    s2[l]=s[j];
                }
                else
                {
                    s2[l]=s[j+1];
                }
                l++;
                break;
            }
            j+=2;
        }
    }
    for(int i=1; i<l; i++)
    {
        cout<<s2[i]<<" ";
    }
    return 0;
}
