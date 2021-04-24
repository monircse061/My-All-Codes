#include<stdio.h>
#include<string.h>
main()
{
    char a[100],a1[100];
    scanf("%s",a);
    scanf("%s",a1);
    strcat(a," ");
    strcat(a,a1);
    printf("%s",a);
    return 0;
}
