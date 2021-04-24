#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=4;i++)
        {for(j=1;j<=i;j++)
        {if(j==i)
            printf("%d%d",j,j-1);
        break;
        printf("%d",j);}
        printf("\n");}
    return 0;
}
