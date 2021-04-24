#include<stdio.h>

int main()
{
    double h,m,x,y;char a;
    while(scanf("%lf %c %lf",&h,&a,&m)!=EOF){
    if(h==0&&m==0){
        break;
    }
    x=((h*60)/2)+(m/2)-(m*6);
   if(x<0){
    y=x*(-1);
   }
   else
   {y=x;}
   if(y>180)
    printf("%.3lf\n",360-y);
   else
    printf("%.3lf\n",y);}
    return 0;
}
