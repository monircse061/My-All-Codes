#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,v0,v1,a,l,sum=0,sum1,cont=0,i=0;
    scanf("%d %d %d %d %d",&c,&v0,&v1,&a,&l);
    while(sum<c)
    {
        sum1=v0+(a*i);
        if(sum1<v1)
        {
           cont++;
            sum+=sum1;
            if(i!=0)
            {
                sum-=l;
            }
        }
        else
        {
            sum+=v1;cont++;
            if(i!=0)
            {
                sum-=l;
            }
        }
        i++;
    }
    printf("%d",cont);
    return 0;
}
