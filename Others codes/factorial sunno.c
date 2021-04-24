#include<stdio.h>
 int main()
{
    long long int x;long long int y=1,z,i=0,j;
    scanf("%lld",&x);
    for(j=x;j>0;j--)
    y=y*j;
    while(1)
    {z=y%10;
    if(z!=0)
        break;
        i++;
        y=y/10;}

        printf("%lld",i);




    return 0;

}
