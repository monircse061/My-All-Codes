#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll node,edge,Min,Max;
    scanf("%I64d %I64d",&node,&edge);
    if(node==1)
    {
        printf("1 1");
        return 0;
    }
    if(edge>=(node+1)/2)
    {
        Min=0;
    }
    else
    {
        Min=node-(edge*2);
    }
    if(edge==0)
    {
        Max=node;
    }
    else
    {
      for(ll i=node-1;i>=1;i--){
        ll ck=(i*(i-1))/2;
        if(edge>ck){
            Max=node-i-1;
            break;
        }
      }
    }
    printf("%I64d %I64d",Min,Max);
    return 0;
}

