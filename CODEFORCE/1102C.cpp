#include<bits/stdc++.h>
using namespace std;
int ar[1000000];
int main()
{
    int n,x,y,cont=0;
    scanf("%d %d %d",&n,&x,&y);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]<=x)
        {
            cont++;
        }
    }
    if(x>y)
    {
        printf("%d\n",n);
    }
    else
    {
        if(cont%2==0)
        {
            printf("%d\n",cont/2);
        }
        else
        {
            printf("%d\n",(cont/2)+1);
        }
    }
    return 0;
}
