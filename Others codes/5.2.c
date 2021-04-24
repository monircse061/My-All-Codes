#include<stdio.h>
main()
     {
         int i,sum=0;
         for(i=101;i<200;i++)
            {if(i%7==0)
            sum=sum+i;}
         printf("%d",sum);
         return 0;
     }
