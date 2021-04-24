#include<stdio.h>
main()
{
    char a[100],a1[100];int i;i=0;
    scanf("%s",a);
    while(1)
        {a1[i]=a[i];

    if(a[i]=='\0')
   break;   i++;
}

    printf("%s",a1);
    return 0;
}
