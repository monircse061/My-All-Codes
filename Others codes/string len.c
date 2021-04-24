#include<stdio.h>
main()
{
    char a[100]="refatul fahad rabby";
    int i,ln;
    i=0;
    while(a[i]!='\0')
        i++;
    ln=i;
    printf("%d",ln);
    return 0;
}
