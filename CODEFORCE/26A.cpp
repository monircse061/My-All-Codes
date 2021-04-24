#include<bits/stdc++.h>
using namespace std;
int cont[10009],l=1,a[3*1009],b[3*1009];
void fun()
{
    for(int i=2; i<=3000+1; i++)
    {
        if(cont[i]==0)
        {
            a[l]=i;
            l++;
            for(int j=2; i*j<=3000+1; j++)
            {
                cont[i*j]=1;
            }
        }
    }
}
void init()
{
    for(int i=2; i<=3000; i++)
    {
        b[i]=0;
    }
}
int main()
{
    int n,x=0;
    fun();
    scanf("%d",&n);
    if(n<=5)
    {
        printf("0");
    }
    else
    {
        for(int i=6; i<=n; i++)
        {
            int sum=0;
            for(int j=1; j<l; j++)
            {
                int num=a[j];//cout<<a[l-1]<<" ";
                if(num>i)
                {
                    break;
                }
                if(i%num==0)
                {
                    if(b[num]==0)
                    {
                        sum++;
                        b[num]++;
                    }
                }
                if(sum>2)
                    break;
            }
            if(sum==2)
            {
                x++;
            }
            init();
        }
        printf("%d",x);
    }
    return 0;
}
