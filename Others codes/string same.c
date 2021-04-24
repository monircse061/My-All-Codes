#include<stdio.h>
#include<stdio.h>
#include<string.h>
main()
{
    int ck;
    char a[100],a1[100];
    scanf("%s",a);
    scanf("%s",a1);
    ck=strcmp(a,a1);
    if(ck==0)
        printf("same");
    else
        printf("no");
    return 0;
}
