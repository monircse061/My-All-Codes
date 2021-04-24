#include<bits/stdc++.h>
using namespace std;
int b1[10000];
int main()
{
    int n,b,a[10000],k=0,e1=0,e2=0,o1=0,o2=0,cont=0,x,y,l=2,sum=0,i1=0,sum1=0;
    scanf("%d %d",&n,&b);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2!=0||n==2)
    {
        printf("0");
       return 0;
    }
    else
    {
        while(l<=n-2)
        {
            e1=0,o1=0;
            x=0;//cout<<l<<" ";
            for(int i=1; i<=k+2; i++)
            {
                if(a[i]%2==0)
                {
                    e1++;
                }
                else
                {
                    o1++;
                }
            }
            if(e1==o1)
            {
                x=1;
            }
            e2=0,o2=0;
            y=0;
            sum=abs(a[k+2]-a[k+2+1]);
            for(int j=k+2+1; j<=n; j++)
            {
                if(a[j]%2==0)
                {
                    e2++;
                }
                else
                {
                    o2++;
                }
            }
            if(e2==o2)
            {
                y=1;
            }
            if(x==y&&x!=0&&y!=0)
            {
                //cont++;
                b1[i1]=sum;
                i1++;
            }
            k++;
            l++;
        }
        sort(b1,b1+i1);
        for(int i=0; i<i1; i++)
        {
            //cout<<b1[i]<<" ";
        }
        for(int i=0; i<i1; i++)
        {
            if(sum1<=b)
            {
                sum1+=b1[i];
                if(sum1<=b)
                {
                    cont++;
                }
                else
                {
                    sum1-=b1[i];
                }
            }
        }
    }
    printf("%d",cont);
    return 0;
}
















