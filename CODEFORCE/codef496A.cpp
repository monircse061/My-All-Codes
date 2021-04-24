#include<bits/stdc++.h>
using namespace std;
int a[100009],b[100009];
int main()
{
    int n,cont=0,st=0,sum=1,l=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1; i<=n; i++)
    {

        st++;
        if(a[i]+1!=a[i+1])
        {
            l++;
            cont++;
            b[l]=st;
            st=0;
        }
}
printf("%d\n",cont);
for(int i=1; i<=l; i++)
{
    printf("%d ",b[i]);
}
return 0;
}
