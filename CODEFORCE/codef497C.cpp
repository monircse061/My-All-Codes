#include<bits/stdc++.h>
using namespace std;
int a[100009];
int main()
{
    int n,l=0,x=0,y=1;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i=1; i<n; i++)
    {
            if(a[l]<a[i])
            {
                    x++;
                    l++;
            }
    }
    printf("%d",x);
    return 0;
}
