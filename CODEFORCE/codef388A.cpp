#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,sum;
    scanf("%d",&n);
    if(n%2!=0)
    {
        num=(n/2)-1;
        sum=num+1;
    }
    else
    {
        num=n/2;
        sum=num;
    }
    printf("%d\n",sum);
    for(int i=1; i<=num; i++)
    {
        printf("2 ");
    }
    if(n%2!=0)
        printf("3");
    return 0;
}
