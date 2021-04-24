#include<stdio.h>
main()
{
    char s[100]="MY NAME IS REFAT";int avg,base;
    base=(int)(s) ;
    avg=(int)strstr(s,"NAME");
    printf("%d  ",avg-base+1);
    return 0;
}
