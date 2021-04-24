#include<bits/stdc++.h>
using namespace std;
int ar[100009];
int main()
{
    int n,k,x=0,cont=1;
    scanf("%d %d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    sort(ar+1,ar+n+1);
    //for(int i=1; i<=n; i++)
        //ar[i]-=ar[1];
        printf("%d\n",ar[1]);
    x=ar[1];
    for(int i=2,j=2; i<=n&&j<=k; i++)
    {
        ar[i]-=x;
        if(ar[i]==0)continue;
        else
            {printf("%d\n",ar[i]);cont++;j++;}
        x+=ar[i];
    }
if(cont<k){
    for(int i=cont+1;i<=k;i++)
        printf("0\n");
}
    return 0;
}
