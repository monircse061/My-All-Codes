#include<iostream>
using namespace std;
int main(){
    /*long long  a,b,c,i,j;
   while(scanf("%lld%lld",&a,&b)!=EOF){
   if(a>b){
      c=a;
      a=b;
      b=c;
   }
   j=1;
   if(b-a<2){
    printf("-1\n");
    continue;
   }
   for(i=2;i<=a;i++)
    {if(a%i==0&&b%i==0)
        {j=0;
        break;}}
     if(j==0)
        printf("%lld %lld %lld",a,a+1,a+2);
     else if(j==1)
            printf("%lld %lld %lld",a+1,a+2,a+3);
   }*/

    long long a, b, c, l, r;
    while(scanf("%lld%lld",&l,&r)!=EOF){
    if(l%2!=0)
    {
        l+=1;
    }
    if(r-l<2)
    {
        printf("-1\n");
    }
    else
    {
        a = l;
        b = l+1;
        c = l+1+1;
        printf("%lld %lld %lld\n",a,b,c);
    }}
    return 0;
}


