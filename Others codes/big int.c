#include<stdio.h>

int main()
{
    char s[1005];
    int x,l,i,e,o,k,j;
    while(gets(s)){
        if((s[0]-'0')==0)
            break;
        e=0;
        o=0;
        for(i=0;s[i];i+=2)
            e+=s[i]-'0';
        for(j=1;s[j];j+=2)
            o+=s[j]-'0';
        l=abs(e-o);
        if(l%11==0)
            printf("%s is a multiple of 11.\n",s);
        else
            printf("%s is not a multiple of 11.\n",s);
    }
    return 0;
}
