#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000000];
    long long a,b,c,d,p,x,i,j,y;
    while(gets(s))
    {
        if(s[0]=='0'&&s[1]=='\0')
        {
            break;
        }
        b=0;
        c=0;
        x=strlen(s);
        for(i=0;i<x;i=i+2)
            {b=b+(s[i]-48);}
        for(j=1;j<x;j=j+2)
            {c=c+(s[j]-48);}
        d=abs(b-c);
        if(d%11==0)
            {printf("%s is a multiple of 11.\n",s);}
        else
            {printf("%s is not a multiple of 11.\n",s);}
    }
    return 0;
}
