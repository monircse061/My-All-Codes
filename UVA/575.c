#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[100000];
    int  i,y,x,m,j,z;
    while(scanf("%s",s))
    {
        if((s[0]-'0')==0)
        {
            break;
        }
        y=0;
     x=strlen(s);
        m=x;
        for(i=0; i<x; i++,m--)
        {
            y=y+((s[i]-'0')*(pow(2,m)-1));
        }
        printf("%d\n",y);
    }
    return 0;
}

