#include<bits/stdc++.h>
using namespace std;
long long int d[1000009],e[1000009],a[1000009];
long long int n,b[100000009],c[1000009];
int main()
{
int j,j1;
    char s[4*100009];
    scanf("%I64d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);
        b[a[i]]=i+1;

    }
    sort(a,a+n);
    scanf("%s",s);
    for(int i=0; i<2*n; i++)
    {
        if(s[i]=='0')
        {
            j=0;
            while(1)
            {
                if(d[a[j]]==0)
                {
                    d[a[j]]++;
                    c[i]=b[a[j]];
                    break;
                }
                j++;
            }
        }
        else
        {
           j1=i-1;
            while(j1>=0)
            {
                if(s[j1]=='0')
                {

                    if(e[c[j1]]==0)
                    {
                        c[i]=c[j1];
                        e[c[j1]]++;

                        break;
                    }
                }
                j1--;
            }
        }
    }
for(int i=0; i<2*n; i++)
{
    printf("%I64d ",c[i]);
}

return 0;
}
