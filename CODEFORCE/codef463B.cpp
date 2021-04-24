#include<bits/stdc++.h>
using namespace std;
int a[10][1000009];
int j=0,l,r,k,cont,x,s,p,n,t;
void fun()
{
    for(int i=1; i<=1000001; i++)
    {
        j++;
        x=i;
        while(x>=10)
        {
            n=x;
            s=1;
            while(n!=0)
            {
                p=n%10;
                if(p!=0)
                {
                    s=s*p;
                }
                n=n/10;
            }
            x=s;
        }
        a[x][i]=1;
    }
}
int main()
{

    fun();
    scanf("%d",&t);
    for(int i=1; i<=9; i++)
    {
        int sum=0;
        for(int j=1; j<=1000001; j++)
        {
            sum=sum+a[i][j];
            a[i][j]=sum;
        }
    }

    while(t--)
    {
        scanf("%d %d %d",&l,&r,&k);
        cont=0;
        cont=a[k][r]-a[k][l-1];
        printf("%d\n",cont);
    }

//for(int i=81;i<=94;i++)
    //scout<<i<<" "<<a[6][i]<<endl;
    return 0;
}
