#include<bits/stdc++.h>
using namespace std;
int cont[10000],a[10000];
void fun()
{
    for(int i=97; i<=122; i++)
    {
        cont[i]=0;
    }
}
int main()
{
    string s;
    int l=0,x=-1,sum=0,n;
    scanf("%d",&n);
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(cont[s[i]]==0)
            {
                sum++;
                cont[s[i]]++;
            }
        }
        else
        {
            a[l]=sum;
            sum=0;
            l++;
            fun();
        }
    }
    a[l]=sum;
    for(int i=0; i<=l; i++)
    {
        if(x<a[i])
        {
            x=a[i];
        }
    }
    printf("%d",x);
    return 0;
}
