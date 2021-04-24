#include<stdio.h>
main()
{
    float f,c,f2,f1,c1;
    int i=0,T;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%f%f",&c1,&f1);
        f2=(9*c1)/5+32;
        f=f2+f1;
        c=((f-32)/9)*5;
        i++;
        printf("Case %d: %.2f\n",i,c);
    }
    return 0;
}
