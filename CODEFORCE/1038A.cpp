#include<bits/stdc++.h>
using namespace std;
int cont[100009],st[100009],ck[100009],w[100009];
int main()
{
    int n,k,x=INT_MAX,num=0,y=INT_MAX,d=0;
    char s[100009];
    scanf("%d %d",&n,&k);
    scanf("%s",s);
    for(int i=0; i<n; i++)
    {
        if(st[s[i]]==0)
        {
            num++;
        }
        st[s[i]]=1;
    }
    if(num<k)
    {
        printf("0");
    }
    else
    {
        int sum=0,l=0,len=0,len1=0;
        for(int i=0; sum<k; i++)
        {
            if(ck[s[i]]==0)
            {
                ck[s[i]]=1;
                sum++;
                l=i+1;
            }
        }
        for(int i=l; i<n; i++)
        {
            cont[s[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(ck[s[i]]==1)
            {
                w[s[i]]++;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(w[s[i]]>0)
            {
                d++;
                if(y>w[s[i]]&&w[s[i]]>0)
                {
                    y=w[s[i]];
                }
                w[s[i]]=-10000;
            }
        }
        for(int i=l; i<n; i++)
        {
            if(ck[s[i]]==0)
            {
                len1++;
            }
        }
        //cout<<d<<" "<<y<<len1;
        printf("%d",(d*y)+len1);
    }
    return 0;
}
