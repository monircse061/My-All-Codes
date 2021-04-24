#include<stdio.h>
main()
{
    int a,b,c,t,i=0,s;
    scanf("%d",&t);
    while(t--)
        {scanf("%d%d%d",&a,&b,&c);
        i++;
    if((a<b&&b<c)||(a>b&&b>c))
        s=b;
    else if((a<c&&a>b)||(a>c&&a<b))
        s=a;
    else
        s=c;
        printf("Case %d:%d\n",i,s);}
    return 0;
}

