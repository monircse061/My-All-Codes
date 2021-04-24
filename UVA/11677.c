#include<stdio.h>
int main()
{
 int h1,b,h2,d,h,m;
 while(scanf("%d%d%d%d",&h1,&b,&h2,&d)!=EOF)
 {if(h1==0&&b==0&&h2==0&&d==0)
        break;
   else
    h=h2-h1;
    m=d-b;
    if(m<0)
        {m=m+60;
        h=h-1;}
        if(h<0)
            h=h+24;

        printf("%d",h*60+m);
        }
}
