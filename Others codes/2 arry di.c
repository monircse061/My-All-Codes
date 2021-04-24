#include<stdio.h>
main()
{
    int i,j,a[4][4];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
   printf("%d",a[1][1]);
     return 0;
}
