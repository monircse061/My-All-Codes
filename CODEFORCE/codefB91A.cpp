#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,x=1,p;
    scanf("%d",&n);
    n1=n;
    int a[100];
    a[0]=4,a[1]=7,a[2]=44,a[3]=77,a[4]=47,a[5]=74,a[6]=444,a[7]=777,
    a[8]=447,a[9]=774,a[10]=477,a[11]=744,a[12]=747,a[13]=474;
    while(n1>0)
    {
        p=n1%10;
        n1/=10;
        if(p==4||p==7)
        {
            continue;
        }
        else
        {
            x=0;
            break;
        }
    }
    if(x==1)
    {
        printf("YES");
        return 0;
    }
    else
    {
        for(int i=0; i<14; i++)
        {
            if(n%a[i]==0||n%a[i]==0)
            {
                printf("YES");
                return 0;
            }
        }
        printf("NO");
        return 0;
    }
}
