#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,cont,x=-1;
    scanf("%d %d %d %d",&a,&b,&c,&n);
    cont=(a+b)-c;
    while((c!=0&&(a==0||b==0))||c==n||a<c||b<c)
    {
        if(1)
        {
            cont=-1;
            break;
        }
    }
    if(cont>=0)
    {
        x=n-cont;
    }
    if(x<=0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n",x);
    }
    return 0;
}
