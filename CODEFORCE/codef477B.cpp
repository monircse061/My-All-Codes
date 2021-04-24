#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,cont=0,c,s[100009],sum=0,sum1=0,j,x=1,p=0;
    scanf("%d %d %d",&n,&a,&b);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&s[i]);
        sum=sum+s[i];
    }
    sort(s+1,s+n);
    for(int i=n-1; i>0; i--)
    {
            c=(s[0]*a)/sum;
            if(c>=b)
            {
                break;
            }
            sum=sum-s[i];
            cont++;
        }
    cout<<cont;
    return 0;
}
