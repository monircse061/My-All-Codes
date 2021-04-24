#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for(int i=0; i<n; i++)
        scanf("%d",&ar[i]);
        int m=n;
    for(int i=0; i<m; i++)                                ///accepted
    {

        if(ar[i])
        {
            int s=i;
            for(int j=i+1; j<n; j++)
            {
                if(ar[s]<=ar[j])
                {
                    printf("%d ",ar[s]);
                    ar[s]=0;
                    s=j;
                 }

            }
            printf("%d\n",ar[s]);
          ar[s]=0;
          }
    }
    return 0;
}
