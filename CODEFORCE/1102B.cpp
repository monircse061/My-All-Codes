#include<bits/stdc++.h>
using namespace std;
int cont[1000000],ar[1000000],col[1000000],u[10000];
int main()
{
    int n,k,el,x=-1,ck;
    scanf("%d %d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
        cont[ar[i]]++;
        if(x<cont[ar[i]])
        {
            x=cont[ar[i]];
        }
        col[i]=cont[ar[i]];
    }
    for(int i=1; i<=n; i++)
    {
        if(cont[ar[i]]>k||n<k)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");//ck=x;
    for(int i=1; i<=n; i++)
    {
        u[col[i]]++;
        if(x<k&&u[col[i]]!=1)
        {
            x++;
            printf("%d ",x);
            continue;
        }
        printf("%d ",col[i]);
    }

    return 0;
}
