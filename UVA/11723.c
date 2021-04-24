#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int a,b,i,s,j,m,c=0;
    while(sf("%d%d",&a,&b)&&a!=0&&b!=0)
    {
        s=0;m=0;c++;
        if((b*26)+b<a)
            {pf("Case %d:impossible\n",c);
            continue;}
      j=1;
      for(i=1;i<=a;i++)
                {s=s+1;
      if(s>b*j)
        {j++;
        m++;}}
        pf("Case %d:%d\n",c,m);
    }
    return 0;
}
