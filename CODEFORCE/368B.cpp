#include<bits/stdc++.h>
using namespace std;
int cont[100009],cont1[100009];
int main()
{
    int n,m,a[100009],num[100009];
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=m;i++){
         scanf("%d",&num[i]);
    }
    cont1[a[n]]=1;
    cont[n]=1;
    for(int i=n-1; i>0; i--)
    {
        if(cont1[a[i]]==0)
        {
            cont[i]=1;
            cont1[a[i]]=1;
        }
        cont[i]+=cont[i+1];
        //cout<<i<<" "<<cont[i]<<endl;
    }
    for(int i=1; i<=m; i++)
    {
        printf("%d\n",cont[num[i]]);
    }
    return 0;
}
