#include<stdio.h>
main()
{
    char c[7];int i=0;
    c[0]='R';
    c[1]='E';
    c[2]='F';
    c[3]='A';
    c[4]='T';
    c[5]='\0';
    c[6]='L';
    while(c[i]!='\0'){
    printf("%s",c[i]);
    i++;}
    return 0;
}
