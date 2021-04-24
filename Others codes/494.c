#include<stdio.h>
#include<string.h>

int main()
{
    char s[100005];
    int c,i;
    while(gets(s)!=EOF){
        int c=0,n=0;
        for(i=0;i<strlen(s);i++){
            if(((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z')))
                {
                    n=1;
                }
                else
                {
                    if(n==1)
                        c++;
                    n=0;
                }
        }
        if(n==1)
            c++;
        printf("%d\n",c);
    }
    return 0;
}
