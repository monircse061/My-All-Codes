#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[200001],n,j,m=0,x,y;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==2){m++;}
    }
    y=n-m;
   if(m>y)
    printf("%d\n",y);
   else{
     printf("%d\n",(m+(y-m)/3));
   }
    return 0;
}
