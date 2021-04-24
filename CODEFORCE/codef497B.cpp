#include<bits/stdc++.h>
using namespace std;
int a[100009][10];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        if(a[i][1]>a[i][2])
        {
            int c=a[i][1];
            a[i][1]=a[i][2];
            a[i][2]=c;
        }
    }
    if(n==1)
    {
        printf("YES");
    }
    else
    {
        for(int i=1; i<n; i++)
        {

            if(a[i][2]<a[i+1][2])
            {
                int c1=min(a[i+1][1],a[i+1][2]);
                a[i+1][2]=c1;
            }
            if(a[i][2]<a[i+1][2])
            {
                printf("NO");
                return 0;
            }
        }
        printf("YES");
    }
    return 0;
}

