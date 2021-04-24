#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int n,m,k,p,y,a,j,x,z;
    while(scanf("%I64d %I64d",&p,&y)!=EOF)
    {
        z=1;
        if(p==y)
            cout<<"-1"<<endl;
        else
        {
            if(y%2==0)
            {
                y--;
            }
            n=y;
            for(int i=n; i>p; i=i-2)
            {
                k=1;
                a=sqrt(i)+1;
                if(a>p)
                {
                    j=a-p;
                    m=a-j;
                    a=m;
                }
                for(int l=3; l<=a; l=l+2)
                {
                    if(i%l==0)
                    {
                        k=0;
                        break;
                    }
                }
                if(k==1)
                {
                    z=0;
                    cout<<i<<endl;
                    break;
                }
            }
            if(z==1)
            {
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}
