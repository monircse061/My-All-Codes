#include<stdio.h>
int main()
{
    int a[10000],b,c,i,j,m,s,n,p,d;
    while(scanf("%d%d",&b,&c)!=EOF)
    {
      d=0;
        m=0;
        s=0;
        for(i=0; i<b; i++)
        {
            scanf("%d",&a[i]);

        }

        for(j=0; j<=b; j++)
        {
            if(a[j]>8)

            {
                m=a[j]-8;
            }
            else
            {
                m=0;
            }
            p=a[j]-m;
            n=c-p;
            c=n;d++;
            if(c>0&&j==b-1)
            {
                printf("-1\n");

            }
            else if(j<=b-1&&(c==0||c<0)){
                 printf("%d\n",d);
                 break;
            }
        }

    }
    return 0;
}
