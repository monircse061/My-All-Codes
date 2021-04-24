#include<bits/stdc++.h>
using namespace std;
map<string,string>m;
map<string,string>::iterator it;
int main()
{
    m["purple"]="Power";
    m["green"]="Time";
    m["blue"]="Space";
    m["orange"]="Soul";
    m["red"]="Reality";
    m["yellow"]="Mind";
    char s[100000];
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",s);
        m[s]=" ";
    }
    printf("%d\n",6-n);
    for(it=m.begin()+1; it!=m.end(); it++)
    {
        if(it->second!=" ")
        {
            cout<<it->second<<endl;
        }
    }
    return 0;
}
