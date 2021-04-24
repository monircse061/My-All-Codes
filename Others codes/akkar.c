#include<stdio.h>
#include<string.h>
 int main()
{
    char a[1000],j[2];int i,ln,k=0,T,m;



    scanf("%[^\n]",a);
    ln=strlen(a);
    scanf("%s",j);



    for(i=0;i<=ln;i++)
    {if(a[i]==j[0])
        k++;}
    printf("occurence of'%s'in'%s' =%d",j,a,k);

    return 0;
}
