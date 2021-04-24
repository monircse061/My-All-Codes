#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,v1,v2,t1,t2,cost,cost2;
    scanf("%I64d %I64d %I64d %I64d %I64d",&s,&v1,&v2,&t1,&t2);
    cost=(s*v1)+(2*t1);
    cost2=(s*v2)+(2*t2);
    if(cost<cost2)
    {
        printf("First");
    }
    else if(cost2<cost)
    {
        printf("Second");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
