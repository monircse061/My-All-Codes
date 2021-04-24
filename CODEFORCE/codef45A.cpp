#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b,i=2,k,n1,cont=0,cont1,mul,p,c,c1,c2,a1,b1;
    scanf("%I64d %I64d %I64d %I64d",&n,&m,&a,&b);
    k=m;
    n1=n;
    if(n1<m)
    {
        mul=m;
        cont=(mul-n)*a;
        cont1=n*b;
        if(cont<cont1)
        {
            cout<<cont;
        }
        else
        {
            cout<<cont1;
        }
    }
    else
    {
        if(n1%m==0)
        {
            cout<<"0";
        }
        else
        {
            p=n1/m;
            mul=(p+1)*m;
            c2=(mul-n)*a;
            c=n*b;
            c1=(n1-(m*p))*b;
            a1=min(c,c2);
            b1=min(a1,c1);
            cout<<b1;
        }
    }

    return 0;
}
