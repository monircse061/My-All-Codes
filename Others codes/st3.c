#include<stdio.h>
main()
{
    char a[100],a1[100];
    int i,ln,x;
    i=0;
    scanf("%s%s",a,a1);
    for(ln=0; a[ln]!='\0';)
        ln++;
    x=ln;


    while(1)
    {
        a[x+i]=a1[i];
        if(a1[i]=='\0')
            break;

        i++;
    }

    printf("%s",a);
    return 0;



}
