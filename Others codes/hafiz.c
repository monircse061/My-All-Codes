#define pf printf
#define sf scanf
#include<stdio.h>
int main()
{
    int b[1000],s[1000],i,j,a,c,k=0,m,n,x;
    while(sf("%d%d",&m,&n)!=EOF)
    {x=1;
        for(j=0;j<m*n;j++)
        {sf("%d",&b[j]);}
    for(i=0;i<n;i++)
    {k=1;c=0;
        for(a=i;k<=m;k++)
            {c=c+b[a];
           a=a+n;}
         s[i]=c;}
     for(k=0;k<n-1;k++)
        {if(s[k+1]>s[0])
            {s[0]=s[k+1];
            x++;}}
            pf("%d \n",x);}
            return 0;

}
