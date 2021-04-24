#include<bits/stdc++.h>
using namespace std;
int a[10000],cont[10000];
int main()
{
    int n,m,sum=0;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        cont[a[i]]++;
    }
    for(int i=0; i<101; i++)
    {
        if(i==m)
        {
            if(cont[i]!=0)
            {
                sum++;
            }
            break;
        }
        if(cont[i]==0)
        {
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
