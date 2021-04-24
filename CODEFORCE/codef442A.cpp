#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int cont=0;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='-'||(s[i]>='A'&&s[i]<='Z'))
        {
            s1="";
        }
        s1+=s[i];
        if(s1=="Nikita")
        {
            cont++;
        }
        else if(s1=="Danil")
        {
            cont++;
        }
        else if(s1=="Olya")
        {
            cont++;
        }
        else if(s1=="Slava")
        {
            cont++;
        }
        else if(s1=="Ann")
        {
            cont++;
        }
    }
    if(cont==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
