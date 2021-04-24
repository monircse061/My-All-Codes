#include<stdio.h>
main()
{
    int x,y,z,p;
    scanf("%d%d%d",&x,&y,&z);
    p=x;
    x=y;
    y=z;
    z=p;
    printf("%d %d %d",x,y,z);
    return 0;
}
