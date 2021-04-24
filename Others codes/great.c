#include<stdio.h>
main()
{
    int x,y,z;
    scanf("%d %d %d \n",&x,&y,&z);
    if(x>y&&y>z)
   {
    printf("%d %d %d\n",x,y,z);
    printf("%d %d %d",z,y,x);}
    else if(y>z&&z>x)
    {printf("%d %d %d\n",y,z,x);
    printf("%d %d %d",x,z,y);}
    else if(z>y&&y>x)
    {printf("%d %d %d\n",z,y,x);
    printf("%d %d %d",x,y,z);}
    else
    printf("error");
    return 0;
}
