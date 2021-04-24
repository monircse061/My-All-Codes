#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    int l=0,p=0,len,x,y;
    scanf("%s",s);
    len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]=='o')
        {
            p++;
        }
        if(s[i]=='-')
        {
            l++;
        }
    }
    p--;
    if(p==1)
    {
        if(l%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    else if(p==0||p<0||l==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {//cout<<l<<" "<<p;
        for(int i=1; i<=l/p; i++)
        {
            //x=l/(p*i);
            y=l-(p*i);
            if(i==y)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
