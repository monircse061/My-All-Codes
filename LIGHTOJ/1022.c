#include<stdio.h>
int main(){
   double area,r,l;int j=0,test;
   scanf("%d",&test);
   while(test--){
   scanf("%lf",&r);
   l=2*r;
   area=l*l-2*acos(0.0)*r*r;j++;
   printf("Case %d: %.2lf\n",j,area);}
   return 0;
}
