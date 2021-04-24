#include<stdio.h>
#include<math.h>
int main()
{
   double n,m,k,i=0;
   while(scanf("%lf %lf",&n,&m)!=EOF){

    k=pow(m,(1.0/n));

        printf("%.lf\n",k);

   }
    return 0;
}
