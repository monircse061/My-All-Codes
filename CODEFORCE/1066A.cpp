#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int L,v,l,r,t,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&L,&v,&l,&r);
        sum=0;
        sum=L/v;
        if(l%v==0){
           sum-=((r/v)-(l/v-1));
        }
        else{
            sum-=((r/v)-(l/v));
        }
        printf("%d\n",sum);
    }
    return 0;
}
