#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    long long n,m,a,b,p,x,i,j,k,l;int s[10000],c[10000];
   while(scanf("%lld",&n)!=EOF)
   {i=0;l=0;
   while(n>0){
    a=n%10;
    s[i]=a;
    c[i]=a;
    n=n/10;
    i++;
   }
   for(j=0;j<i-1;j++){
    for(k=j+1;k<i;k++){
        if(s[j]<s[k]){
            p=s[j];
            s[j]=s[k];
            s[k]=p;
        }
    }
   }
   for(j=0;j<i-1;j++){
        l++;
        for(k=j+1;k<i;k++){
    if((c[j]>c[k]&&c[k]!=0)||(l>1&&c[j]>c[k])){
        p=c[j];
        c[j]=c[k];
        c[k]=p;}
    else if(c[j]<c[k]&&c[0]==0)
        {p=c[j];
       c[j]=c[k];
        c[k]=p;}
    }
   }
   b=0;x=0;
   for(j=0;j<i;j++){
      b=b*10+s[j];
      x=x*10+c[j];
   }
   printf("%lld - %lld = %lld = 9 * %lld\n",b,x,b-x,(b-x)/9);}
    return 0;
}
