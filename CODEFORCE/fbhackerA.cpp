#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
struct abc
{
    string s;
    int u,v;
};
abc e[10000];
bool compare(abc a,abc b)
{
    if(a.u!=b.u)
        return a.u<b.u;
    else
        return a.v>b.v;
}
int t;
int main()
{
    //freopen("Tourist.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k,v,cont,v1,c=0,d,d1,n1,k1,gc,lc,num;
    string s1[10000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&k,&v);
        n1=n;
        k1=k;
        while(1)
        {
            d=n1%k1;
            if(d==0)
            {
                gc=k1;
                break;
            }
            n1=k1;
            k1=d;
        }
        lc=(n*k)/gc;
        num=lc/k;
        d1=v%num;
        if(d1==0)
        {
            v=num;
        }
        else
        {
            v=d1;
        }
        cont=0;
        int j=n;
        for(int i=0; i<n; i++)
        {
            cin>>s1[i];
            e[i].s=s1[i];
            e[i].v=j;
            j--;
        }
        while(v--)
        {
            sort(e,e+n,compare);
            for(int i=0; i<k; i++)
            {
                e[i].u++;
                //cout<<v;
                if(v==0)
                {
                    e[i].u=0;
                }
            }
            //for(int i=0; i<n; i++)
            {
                //cout<<e[i].s<<" "<<e[i].u<<endl;
            }
            //cout<<endl;
        }
        for(int i=0; i<n; i++)
        {
            m[e[i].s]=e[i].u;
        }
        c++;
        cout<<"Case "<<"#"<<c<<":"<<" ";
        for(int i=0; i<n; i++)
        {
            if(m[s1[i]]==0)
            {
                cout<<s1[i];
                cont++;
                if(cont!=k)
                    cout<<" ";
            }
            if(cont==k)
            {
                break;
            }
        }
        for(int i=0; i<51; i++)
        {
            e[i].u=0;
            e[i].s="";
        }
        cout<<endl;
    }
    return 0;
}
