#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,y,z,sari,col,k,l,t,a=0;
    double x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        col=0;
        x=sqrt(n);
        y=x;
        if(x!=y)
        {
            y=y+1;
        }
        z=y;
        y=y*y;
        if(y%2==0&&(y-n)+1<=z){
            col=z;sari=y-n+1;
        }
        else if(y%2==0){
            sari=z;col=z-((y-n+1)-z);
        }
        else if(y%2!=0&&(y-n)+1<=z){
            col=y-n+1;sari=z;
        }
        else if(y%2!=0)
        {
            sari=z-((y-n+1)-z);col=z;
        }
        a++;
        printf("Case %lld: %lld %lld\n",a,col,sari);
    }
    return 0;
}
