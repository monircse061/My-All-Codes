#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],s[100];
    int i,j,k,ln;
    while(gets(s)!=EOF)
    {
        if(s[0]=='D'&&s[1]=='O'&&s[2]=='N'&&s[3]=='E')
            break;
        j=0;
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                a[j++]=s[i]+32;
            else if(s[i]>='a'&&s[i]<='z')
                a[j++]=s[i];
        }
        a[j]='\0';
        ln=strlen(a);
        for(i=0,j=ln-1; i<=(ln/2); i++,j--)
        {
            if(a[i]!=a[j])
            {
                printf("Uh oh...\n");
                break;
            }
            else if(i==(ln/2))
                printf("You won't be eaten\n");
        }
    }
    return 0;
}
