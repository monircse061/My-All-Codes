#include<bits/stdc++.h>
using namespace std;
struct abc
{
    int u,v;
};
abc e[10000];
int main()
{
     int n,k=0,a=1;
    long long int x=1000000000000000000,y,com=1000000000000000000,s;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&e[i].u);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&e[i].v);
    }
    /**
    5
     2 4 5 4 10
     40 30 20 10 40
    **/
    //for(int k=0;k<n-2;k++){
    for(int j=1; j<n-1; j++)
    {
        x=1000000000000000000;
        y=1000000000000000000;
        for(int i=j-1; i>=0; i--)
        {
            if(e[i].u<e[j].u)
            {

                if(x>e[i].v)
                {
                    x=e[i].v;
                }
            }
        }
        for(int l=j+1; l<n; l++)
        {
            if(e[j].u<e[l].u)
            {
                if(y>e[l].v)
                {
                    y=e[l].v;
                }
            }
}

        s=e[j].v+x+y;
        //cout<<s<<" ";
        //cout<<x<<" "<<y<<endl;
        if(com>s)
        {
            com=s;a=0;
        }
    }
    if(a==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<com;
    }
    return 0;
}
