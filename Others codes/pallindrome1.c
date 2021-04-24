#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],r[100];
    int i,j,l,k,ck,ln;
    while(scanf("%s",s)!=EOF)
    {
        ln=strlen(s);
        l=ln/2;
        ln=ln-1;
        ck=1;
        for(i=0;i<ln/2;i++)
            {if(s[i]!=s[ln-i])
                ck=0;
        }
        if(ck==1)
            printf("pallindrome\n");
            else
                printf("not pallindrome\n");
    }
    return 0;
}
