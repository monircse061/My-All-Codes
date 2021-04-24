#include<bits/stdc++.h>
using namespace std;
int cont[100000];
int main()
{
    int n,n1,x=1,a[100000],b[100000];
    scanf("%d %d",&n,&n1);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n1; i++)
    {
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n1);
    for(int i=0;i<n||i<n1;i++){
        if(a[i]!=a[i+1]&&i<n){
            cont[a[i]]++;
        }
        if(b[i]!=b[i+1]&&i<n1){
            cont[b[i]]++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(cont[a[i]]==2)
        {
            printf("%d",a[i]);
            x=0;
            break;
        }
    }
    if(x==1)
    {
        if(a[0]<b[0])
        {
            printf("%d%d",a[0],b[0]);
        }
        else
        {
            printf("%d%d",b[0],a[0]);
        }
    }
    return 0;
}
