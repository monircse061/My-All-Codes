#include<stdio.h>
int main()
{
    char s[100],s1[100];int i,j=0,donate,report,t,m;
    scanf("%d",&t);
    for(m=0;m<=t;)
    {while(scanf("%s",s)&&s[5]=='e')
    {   scanf("%d",&i);
    j=j+i;
    m++;}
    while(scanf("%s",s1)&&s1[5]=='t')
        {   printf("%d",j);
        m++;}}
    return 0;
}
