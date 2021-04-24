#include<bits/stdc++.h>
using namespace std;
long long int a[1000009],b[10000];
map<int,int>m,m1;
int main()
{
    long long int n,sum,num=0,mul=1,cont=0,sub;
    scanf("%I64d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=1; i<=31; i++)
    {
        mul*=2;
        b[i]=mul;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=1;j<=31;j++){
            sub=b[j]-a[i];
            if(sub>=0){
                if(a[i]!=sub||m1[a[i]]==1){
                    m[sub]=1;
                }
            }
        }m1[a[i]]=1;
    }
    for(int i=0;i<n;i++){
        if(m[a[i]]==0){
            cont++;
        }
    }
    printf("%I64d",cont);
    return 0;
}
