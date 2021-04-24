#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100009];
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    int i=1,j=1,d,ans=0,cont=0,x=-1;
    while(j<=i&&i<=n)
    {
        d=a[i]-a[j];
        if(ans<=d)
        {
            ans=max(ans,d);
            cont++;i++;
            //cout<<1<<" ";
        }
        else
        {
            j++;
            ans=0;
            if(x<cont)
            {
                x=cont;
            }
            cont=0;
        }
        if(i==n+1&&x<cont)
        {
            x=cont;
        }
    }
    printf("%d",x);
    return 0;
}
