#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,x,y,num1,num2,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&n,&m,&x,&y);
        if(n==1&&m==1)
        {
            printf("Chefirnemo\n");
        }
        else if(((n!=1&&x>n)||(m!=1&&y>m))&&n>2&&m>2)
        {
            printf("Pofik\n");
        }
        else if((n-1)%x==0&&(m-1)%y==0)
        {
            printf("Chefirnemo\n");
        }
        else
        {
            if((n-2)>=0&&(m-2)>=0&&(n-2)%x==0&&(m-2)%y==0)
            {
                printf("Chefirnemo\n");
            }
            else
            {
                printf("Pofik\n");
            }
        }
    }
    return 0;
}
