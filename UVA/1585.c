#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int x,i,j,y,t,k,a;
    scanf("%d",&t);
    for(y=1; y<=t; y++)
    {
        scanf("%s",s);
        a=0;
        x=strlen(s);
        for(i=0; i<x; i++)
        {
            j=1;
            while(s[i]=='O'&&i<x)
            {
                a=a+j;
                i++;
                j++;
            }
        }
        printf("%d\n",a);
    }
    return 0;
}
