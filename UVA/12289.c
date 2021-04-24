#define pf printf
#define sf scanf
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];int i,j;
    sf("%d",&j);
    while(j--)
    {sf("%s",a);
    i=strlen(a);
    if(i==3&&(a[0]=='o'&&a[1]=='n')||(a[0]=='o'&&a[2]=='e')||(a[1]=='n'&&a[2]=='e'))
    pf("1\n");
    else if(i==3&&(a[0]=='t'&&a[1]=='w')||(a[0]=='t'&&a[2]=='o')||(a[1]=='w'&&a[2]=='o'))
    pf("2\n");
    else if(i==5)
        printf("3\n");}
    return 0;
}
