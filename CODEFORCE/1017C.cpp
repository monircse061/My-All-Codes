#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=1,n1;
    scanf("%d",&n);
    if(n<4)
    {
        for(int i=n; i>0; i--)
        {
            printf("%d ",i);
        }
    }
    else
    {

        for(int i=n-1; j<=2&&i>0; i++,j++)
        {
            printf("%d ",i);
            if(j==1)
            {
                n1=i;
            }
            //j++;
            if(j==2)
            {
                j=0;
                i=n1-3;
            }
            //printf("%d ",i);
        }
        if(n%2!=0)
            printf("1");

    }

    return 0;
}
