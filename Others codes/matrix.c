#include<stdio.h>
main()
{
    int i,j,k,sum,c[2][2];
    int m,n,p;
    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
     m=n=p=2;
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
            {printf(" %d",a[i][j]);}
            printf("\n");
    }

       for(i=0;i<p;i++)
       {
           for(j=0;j<n;j++)
            {printf(" %d",b[i][j]);}
            printf("\n");
       }


       for(i=0;i<m;i++)
       {
         for(j=0;j<n;j++)
       {sum=0;
        for(k=0;k<p;k++)    {

     sum=sum+a[i][k]*b[k][j];}  c[i][j]=sum;

         }
       }
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
            {printf(" %d\t",c[i][j]);}
            printf("\n");
       }
       return 0;
}
