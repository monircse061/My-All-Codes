#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],l,i1=1;
    string s;
    char s1;
    scanf("%d",&n);
    cin>>s;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            a[i1]=i;
            i1++;
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]==0)
        {
            break;
        }
        l=0;
        for(int j=a[i]-1; j>(a[i]/2)-1; j--)
        {
            s1=s[j];
            s[j]=s[l];
            s[l]=s1;
            l++;
        }
    }
    cout<<s;
    return 0;
}
