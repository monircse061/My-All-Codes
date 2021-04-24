#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,j,k,x,m,n,y;
    while(scanf("%s",s)!=EOF)
    {
        n=strlen(s);
        j=0;
        k=0;
        for(i=0; i<n; i++)
        {
            x=1;
            if(s[i]>=97&&s[i]<=122)
                j=j+(s[i]-96);
            else
                k=k+(s[i]-38);
        }
        y=j+k;
        for(m=2; m*m<=y; m++)

            if(y%m==0)
                x=0;
        if(x==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}


