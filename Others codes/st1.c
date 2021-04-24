#include<stdio.h>
main()
{
   char str [10][100];
   int n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%s",str[i]);}

   for(i=n-1;i>=0;i--)
   {printf("%s\n",str[i]);}
    return 0;

}
