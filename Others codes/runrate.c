#include<stdio.h>
main()
{
    double x,y,z,j;
    int i,k,T;
    scanf("%d%d%lf",&k,&i,&j);
    x=300-j;
    z=(i/x)*6;
    y=(k-i+1)/j*6;
    printf("%.2lf %.2lf  ",z,y);
    return 0;
}
