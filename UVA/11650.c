#define pf printf
#define sf scanf
#include<stdio.h>
int main()
{
    int h,m,t;
    char a;
    scanf("%d",&t);
    while(t--)
    {
        sf("%d%c%d",&h,&a,&m);
        if(h==11&&m!=00)
            pf("%d:%d\n",h=h+1,60-m);
        else if(h==12&&m!=00)
            pf("%d:%d\n",h=h-1,60-m);
        else if(h!=12&&m==00)
            pf("%d:00\n",12-h);
        else if(h!=12&&m!=00)
            pf("%d:%d\n",h=12-h-1,60-m);
        else if(h==12&&m==00)
            pf("%d:00\n",h);
    }
    return 0;

}
