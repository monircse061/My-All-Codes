#include<stdio.h>
int main()
{
    int t,a,b,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a<b||(a-b)%2!=0)
        {printf("impossible\n");
        }
        else {
            m=(a+b)/2;
            n=(a-b)/2;
            printf("%d %d\n",m,n);
        }

    }

    return 0;

}
