#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,a[10009],j,x,y,x1,m,t,c;
    scanf("%d",&t);
    while(t--)
    {
        c=1;
        scanf("%d %d",&n,&n1);
        for(int i=0;; i++)
        {
            m=pow(2,i);
            if(m>n1)
            {
                x=pow(2,i-1);
                break;
            }
        }
        if(n%2==0)
        {
            y=x-1;
            x1=n-2;
            int i;
            for( i=0; i<x1; i++)
            {
                a[i]=1;
            }
            a[i]=x;
            a[i+1]=y;
            j=i+2;
        }
        else
        {
            if(n==1)
            {
                printf("%d",n1);
                c=0;
            }
            if(n==3&&n1==3)
            {
                printf("1 3 1");
                c=0;
            }
            else
            {
                y=x-2;
                x1=n-3;
                int i=0;
                for( i=0; i<=x1; i++)
                {
                    a[i]=1;
                }
                a[i]=x;
                if(y>=1)
                {
                    a[i+1]=y;
                }
                else
                {
                    a[i+1]=1;
                }
                j=i+2;
            }
        }
        for(int i=0; i<j&&c==1; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
