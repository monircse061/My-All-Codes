#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],x,y,t,ck;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&x,&y);
        int sum=a[0]+a[1]+a[2];
        ck=1;
        int sum1=x+y;
        sort(a,a+3);
        if(x>y)
        {
            swap(x,y);
        }
        if(sum<sum1)
        {
            ck=0;
        }
        else if(sum>=sum1)
        {
            if(1)//a[0]+a[1]==x+y
            {
                if(a[0]>x)
                {
                    ck=0;
                }
                if(a[1]>y)
                {
                    ck=0;
                }
            }
            else if(1)//a[1]+a[2]==x+y
            {
                if(a[1]>x)
                {
                    ck=0;
                }
                if(a[2]>y)
                {
                    ck=0;
                }
            }
            else if(1)//a[0]+a[1]==x+y
            {
                if(a[0]>x)
                {
                    ck=0;
                }
                if(a[2]>y)
                {
                    ck=0;
                }
            }
        }
        if(ck==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
