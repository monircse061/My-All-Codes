#include<stdio.h>
main()
{
    int col,row,y,co,ro;
    scanf("%d%d",&col,&row);
    ro=1;

    do
    {

        co=1;
    do
    {
        y=ro*co;
        printf("%3d ",y);
        co=co+1;


    }
    while(co<=col);

        ro=ro+1;
        printf("\n\n");}
        while(ro<=row);



    return 0;
}
