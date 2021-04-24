#include<bits/stdc++.h>
using namespace std;
int a[2*1000009],cont[2*1000009],b[10000];
int main()
{
    int n,l=1,sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        cont[a[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(cont[a[i]]==1)
            continue;
        while(cont[l])
            l++;
        if(cont[a[i]]==0)
        {
            //cont[a[i]]--;
            a[i]=l;
            l++;
            sum++;
        }
        else
        {
            if(l<a[i])
            {
                cont[a[i]]--;
                a[i]=l;
                l++;
                sum++;
            }
            else
            {
                cont[a[i]]=0;
            }
        }
    }
printf("%d\n",sum);
for(int i=0; i<n; i++)
{
    printf("%d ",a[i]);
}
return 0;
}
