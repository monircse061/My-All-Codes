#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[10000],cont=0,sum=0;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(sum<m)
        {
            if(a[i]<8)
            {
                sum+=a[i];
            }
            else
            {
                sum+=8;
                a[i+1]+=(a[i]-8);
            }
            cont++;
        }

        if(sum>=m)
        {
            printf("%d",cont);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
