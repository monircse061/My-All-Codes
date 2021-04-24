#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,bi,ni=0,by=0,n,n1,x,y,z,cont;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        bi=1;ni=0,by=0;
        n1=n;cont=1;
        while(1)
        {
            x=0,y=0,z=0;
            if(n1>2)
            {
                bi-=cont;
                ni+=cont;
                n1-=2;
                x=1;
            }
            if(n1>8)
            {
                ni-=cont;
                n1-=8;
                by+=cont;
                y=1;
            }
            if(n1>16)
            {
                by-=cont;
                bi+=2*cont;
                cont=bi;
                n1-=16;
                z=1;
            }
            if(x==0||y==0||z==0)
            {
                break;
            }
        }
        printf("%d %d %d\n",bi,ni,by);
    }
    return 0;
}
