#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int l,i,j,x,m,k;
    while( gets(s))
    {l=strlen(s);
    x=0;
    for(i=0; i<l; i++)
    {
        if(s[i]==' ')
        {
            for(j=i-1; j>=x; j--)
            {
                printf("%c",s[j]);
            }
            printf(" ");
            x=1+i;
        }
        else if(i==l-1)
        {
            for(k=l-1; k>=x; k--)

                printf("%c",s[k]);

            break;
        }
    }
    printf("\n");
    }


    return 0;
}

