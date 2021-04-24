#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,test,n,m[10000],p[10000],i,j=0;;
    scanf("%d",&test);
    while(test--)
    {    j++;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&n);
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&m[i],&p[i]);
        }
        printf("Case %d:\n",j);
        for(i=0; i<n; i++)
            {if(m[i]<=c&&m[i]>=a&&p[i]>=b&&p[i]<=d)
                printf("Yes\n");
            else
                printf("No\n");
    }
}
return 0;
}

