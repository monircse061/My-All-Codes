#include<stdio.h>
int main()
{
    int t1,t2,f,a,c1,c2,c3,b,c,n,m,x,t,i=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&c1,&c2,&c3);
        {
            x=(c1>=c2)?c1:c2;
            if(x==c1)
            {
                b=(c2>=c3)?c2:c3;
            }
            else
            {
                b=(c1>=c3)?c1:c3;
            }
        }
        n=(x+b)/2;
        m=t1+t2+f+a+n;
        i++;
        if(m>=90)
            printf("Case %d: A\n",i);
        else if(m>=80&&m<90)
            printf("Case %d: B\n",i);
        else if(m>=70&&m<80)
            printf("Case %d: C\n",i);
        else if(m>=60&&m<70)
            printf("Case %d: D\n",i);
        else if(m<60)
            printf("Case %d: F\n",i);
    }
    return 0;

}
