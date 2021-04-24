#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100009],b[100009],n,m,x=1000000009,j,y=-1000000009,cont,cont1,pos;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(m==1)
    {
        sort(a,a+n);
        printf("%d",a[0]);
    }
    else if(m==2)
    {

        printf("%d",max(a[0],a[n-1]));
    }

else
{
    sort(a,a+n);
    printf("%d",a[n-1]);
}
return 0;
}
