#include<stdio.h>
main()
{
    double a1,b1,c1,a2,b2,c2,R,x,y;
    printf("a1=");
    scanf("%lf",&a1);
    printf("b1=");
    scanf("%lf",&b1);
    printf("c1=");
    scanf("%lf",&c1);
    printf("a2 b2 c2\n");
    scanf("%lf%lf%lf",&a2,&b2,&c2);
    R=a1*b2-a2*b1;
    if(R==0)
        printf("error");
    x=(c1*b2-c2*b1)/R;
    y=(a1*c2-a2*c1)/R;
    printf("x=%lf\n y=%lf",x,y);
    return 0;


}
