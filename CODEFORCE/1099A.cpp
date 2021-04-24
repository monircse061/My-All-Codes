#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,w,sum1,sum2,temp;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(d<f){
        temp=d;
        d=f;
        f=temp;
        temp=c;
        c=e;
        e=temp;
    }
    int sum=((b*(b+1))/2)-(((d-1)*(d-1+1))/2);
    w=a;
    w+=sum;
    w=w-c;
    if(w<0)
    {
        w=0;
    }
    sum1=(((d-1)*(d-1+1))/2)-(((f-1)*(f-1+1))/2);
    if(sum1<0)sum1=0;
    w+=sum1;
    w-=e;
    if(w<0)
    {
        w=0;
    }
    sum2=((f-1)*(f-1+1))/2;
    if(sum2<0)sum2=0;
    w+=sum2;
    printf("%d\n",w);
    return 0;
}
