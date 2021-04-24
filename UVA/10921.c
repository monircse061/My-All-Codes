#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],s1[1000];
    int i,j,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0,j=0; i<l; i++,j++)
    {
        if(s[i]>=48&&s[i]<=49)
            s1[j]=s[i]-48;
        else if(s[i]>='A'&&s[i]<='C')
            s1[j]=2;
        else if(s[i]>='D'&&s[i]<='F')
            s1[j]=3;
        else if(s[i]>='G'&&s[i]<='I')
            s1[j]=4;
        else if(s[i]>='J'&&s[i]<='L')
            s1[j]=5;
        else if(s[i]>='M'&&s[i]<='O')
            s1[j]=6;
        else if(s[i]>='P'&&s[i]<='S')
            s1[j]=7;
        else if(s[i]>='T'&&s[i]<='V')
            s1[j]=8;
        else if(s[j]>='W'&&s[j]<='Z')
            s1[j]=9;
        else if(s[i]=='-')
            s1[j]=s[i];
    }
    for(j=0; j<l; j++)
    {
        if(s1[j]=='-')
        {
            printf("%c",s1[j]);
            continue;
        }
        printf("%d",s1[j]);
    }



    return 0;
}
