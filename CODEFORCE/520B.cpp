#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0,cont=0;
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        ans=n-m;
    }
    else if(n<m)
    {
        while(n<m)
        {
            if(m%2==0){
               m/=2;
            }
            else
            {
               m++;
            }
        cont++;
        }
        ans=abs(cont+n-m);
    }
    printf("%d",ans);
    return 0;
}
