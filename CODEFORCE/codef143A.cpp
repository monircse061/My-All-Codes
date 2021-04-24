#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],j=0,sum=0,cont;
    scanf("%d",&n);
    for(int i=0; i<n*3; i++)
    {
        scanf("%d",&a[i]);
    }
    while(n--)
    {
        cont=0;
        //cout<<cont;
        for(int i=0; i<3; i++)
        {
            if(a[j]==1)
            {
                cont++;
            }
            if(cont==2)
            {
                sum++;
                cont=0;
            }
            j++;
        }
    }
    printf("%d",sum);
    return 0;
}
