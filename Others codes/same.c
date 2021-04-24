#include<stdio.h>
main()
{
    char a[100],a1[100];
    int i=0,ck;
    scanf("%s%s",a,a1);
    ck=1;
    while(a[i]==a1[i])
    {
        if(a[i]!=a1[i])
            ck=0;
        break;
        i++;
    }
    if(ck=1)
        printf("same");
    else
        printf("no");
    return 0;

}
