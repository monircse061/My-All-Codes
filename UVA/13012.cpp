#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],i,j,n;
    while(scanf("%d",&n)!=EOF)
    {
        j=0;
        for(i=0; i<5; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==n)
                j++;
        }
        printf("%d\n",j);
    }
    return 0;
}
