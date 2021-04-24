#include<stdio.h>
int main(){
     /*double t,r,a;
     scanf("%lf",&t);
     while(t--){
        scanf("%lf",&r);
        a=r*3.42;
        printf("%.1lf\n",a);
     }*/
     int t,r,a,b;
     scanf("%d",&t);
     while(t--){
        scanf("%d%d",&r,&a);
        b=r-a;
        printf("%d\n",b);
     }
     return 0;
}
