#include<bits/stdc++.h>
using namespace std;
int cont[100];
int main()
{
    int n,a[100009],sum=0,d,s,sum1=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        cont[a[i]]++;
    }
    sum+=cont[4];
    d=cont[3]-cont[1];
    if(d<0)
    {
        sum1=abs(d)%4;
        sum+=(abs(d)/4)+cont[3];
    }
    else
    {
        sum+=d+cont[1];
    }
    s=cont[2]*2;
    sum+=s/4;
    sum1+=s%4;
    d=sum1%4;
    if(d==0)
    sum+=sum1/4;
    else{
        sum+=1+(sum1/4);
    }
    printf("%d",sum);
    return 0;
}
