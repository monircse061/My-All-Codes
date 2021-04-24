#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,y,j=0,a[10000],m,t,sum,p,s;
    scanf("%d",&n);

    for(int i=1; i<1000000; i++)
    {
        t=n-i;
        s=t;
        sum=0;
        while(t>0)
        {
            p=t%10;
            t=t/10;
            sum+=p;
        }
        if(sum+s==n)
        {
            a[j]=s;
            j++;
        }
    }
    printf("%d\n",j);
    sort(a,a+j);
    for(int i=0; i<j; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
