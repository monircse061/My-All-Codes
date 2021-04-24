#include<stdio.h>
int main()
{
    long long  i,j,l,k,a,b,m,n,c;
    while(scanf("%lld%lld",&a,&b)!=EOF){
      m=0;
      if(a==0&&b==0){
        break;
      }
      if(a>b){
        c=a;
        a=b;
        b=c;
      }
      for(k=a;k<=b;k++){
        i=0;j=0;n=k;
        while(1){
            if(n%2==0){
                n=n/2;

            }
            else
                {n=3*n+1;}
                j++;
                if(n==1){
                    break;
                }
        }
        if(m<j)
           {m=j;
            l=k;}
      }
      printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,l,m);

    }
    return 0;
}
