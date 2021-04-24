#include<stdio.h>
main()
{
 float   a[3]  ,sum ; int i,n;sum=0;
    for(i=0;i<3;i++)
        scanf("%f",&a[i]);
    for(i=0;i<3;i++){
        sum=sum+a[i];}
    printf("%f",sum);
    return 0;
}
