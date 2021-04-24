#include<stdio.h>
main()
{
    double loan,total_amount,interest,years,monthly_amount;
    printf("loan; interest; years;\n");
    scanf("%lf%lf%lf",&loan,&interest,&years);
    total_amount=loan+(loan*(interest/100.00));
    monthly_amount=total_amount/(years*12);
    printf("total=%lf\n monthly=%lf",total_amount,monthly_amount);
    return 0;

}
