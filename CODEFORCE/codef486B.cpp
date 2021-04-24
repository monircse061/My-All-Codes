#include<bits/stdc++.h>
using namespace std;
struct abc
{
    string v;
    int u;
};
abc e[10000];
bool compare(abc a,abc b)
{
    return a.u<b.u;
}
int main()
{
    int n,len,x=0;
    string s,s1,s2;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        cin>>s;
        e[i].v=s;
        len=s.length();
        e[i].u=len;
    }
    sort(e,e+n,compare);
    for(int p=1; p<n&&n!=1; p++)
    {
        s1=e[p].v;
        x=0;
        int l=p-1;
        s2=e[l].v;
        if(e[p].u==e[l].u)
        {
            if(s1!=s2)
            {
                x=0;
                break;
            }
            else
            {
                x=1;
                continue;
            }
        }
        for(int i=0; i<e[p].u; i++)
        {
            int  j=0,k,c=0;
            if(s1[i]==s2[j])
            {
                for(j=0,k=i; (j<e[l].u)&&(k<e[p].u); j++,k++)
                {
                    if(s1[k]!=s2[j])
                    {
                        c=0;
                        break;
                    }
                    c++;
                    if(c==e[l].u)
                    {
                        x=1;
                    }
                }
            }
            if(x==1)
            {
                break;
            }
        }
        if(x==0)
        {
            break;
        }
    }
    if(x==0&&n!=1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<e[i].v<<endl;
        }
    }
    return 0;
}
