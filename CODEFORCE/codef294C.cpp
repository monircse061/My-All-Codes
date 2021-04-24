#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cont=0,sum;
    scanf("%d %d",&n,&m);
    if((n<=1&&m<=1)||n<=0||m<=0)
    {

    }
    else
    {
        while(1)
        {
            if(n>m&&n!=0&&m!=0)
            {
                n-=2;
                m-=1;
            }
            else if(n!=0&&m!=0)
            {
                m-=2;
                n-=1;
            }
            cont++;
            if(n<=0||m<=0||(n==1&&m==1))
            {
                break;
            }

        }
    }
    printf("%d",cont);
    return 0;
}
