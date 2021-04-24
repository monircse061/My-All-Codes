#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i=0,j,x,y,a1,b1;
    scanf("%d %d %d",&n,&a,&b);
    x=(a+b)/n;
    for(j=x;j>=1;j--)
    {
       a1=a/j;b1=b/j;
       if((a1+b1)>=n){
        if(j<=a&&j<=b){printf("%d",j);break;}
       }
    }
    return 0;
}
