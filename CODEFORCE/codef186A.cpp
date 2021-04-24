#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n=0,x,p=0;
    cin>>s;
    if(s[0]!='-')
    {
        cout<<s;
    }
    else
    {
        for(int i=1; i<s.length(); i++)
        {
            if(i!=s.length()-2)
            {    p=p*10+(s[i]-'0');
                //continue;
            }
            if(i!=s.length()-1){
                n=n*10+(s[i]-'0');
            }

        }
        if(-p>-n)
        {
            x=-p;
            printf("%d",x);
        }
        else
        {
            x=-n;
            printf("%d",x);
        }
    }
    return 0;
}
