#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,a[1000],i1=1,j,x=0,i;
    scanf("%d %d",&n,&m);
    for(i=0; i<(n*2); i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<(n*2)-1; i=i+2)
    {
        if((x>=a[i])&&(x<=a[i+1]))
            {x=a[i+1];

        if(x==m)
            {printf("YES\n");
        i1=0;
        break;}}
    }
    if(i1==1)
        {printf("NO\n");}
    return 0;
}
