#include<stdio.h>
#include<string.h>
main()
{
    char a[100],a1[100];int ck,i=0;
    scanf("%s",a);
    scanf("%s",a1);
    ck=strcmp(a,a1);
    while(1)
    {if(ck==0)
       printf("same");
 break;}

while(1)
   { if(a[i]>a1[i])

    printf("a");
    break;
   i++; }
   /*while(1)
    {if(a[i]<a1[i])
   printf("a1");
   break;
   i++;}*/


    return 0;
}
