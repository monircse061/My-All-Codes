#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
map<string,int>::iterator it;
int main()
{
    string s1="",s2;
    int cont=0,n;
    char s[10000];
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=0; i<n-1; i++)
    {
        s1+=s[i];
        s1+=s[i+1];
        m[s1]++;
        s1="";
    }
    for(it=m.begin(); it!=m.end(); it++)
    {
        if(cont<it->second)
        {
            s2=it->first;
            cont=it->second;
        }
    }
    cout<<s2;
    return 0;
}
