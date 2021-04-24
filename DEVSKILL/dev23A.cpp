#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
    int t,n,num,x,t1,cont;
    string s,s1;
    scanf("%d",&t);
    t1=t;
    while(t--)
    {
        x=-1;
        cont=0;
        s1="";
        s="";
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            cin>>s>>num;
            m[s]=num;
            //cout<<m[s]<<" ";
            if(x<=m[s])
            {
                x=m[s];
                s1=s;

            }
        }
        cout<<s1<<endl;
    }
    return 0;
}
