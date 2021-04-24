#include<bits/stdc++.h>
using namespace std;
int cont[1000009],y=0,a[100009];

int main()
{
    int n,x,sum=-1;
    scanf("%d %d",&n,&x);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

        if(cont[a[i]]==1)
        {
            sum=0;
        }
        cont[a[i]]=1;
    }
    if(sum==0)
    {
        printf("0");
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        int num=x&a[i];
        if(num!=a[i]&&cont[num]==1)
        {
            printf("1");
            return 0;
        }
        if(cont[num]==2){
            sum=2;
        }
        if(cont[num]==0)
        {
            cont[num]=2;

        }

    }
    printf("%d",sum);
    return 0;
}
