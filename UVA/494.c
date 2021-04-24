#include<stdio.h>
#include<string.h>
int main()
{

    char s[1000];int i,n,x,y=0,k;
    while(gets(s)!=NULL)
    {x=strlen(s);k=0;
    for(i=0;i<x;i++)
    {if(s[i]<='z'&&s[i]>='A')
           {{k++;}
           while((s[i+1]<='z')&&(s[i+1]>='A'))
           {i++;}}}
    printf("%d\n",k);}
    return 0;
}
