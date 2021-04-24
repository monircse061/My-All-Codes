#include<stdio.h>
main()
{
    int a[1000],i,j,p,k;long long n;
    while( scanf("%lld",&n)&&n!=0)

    {   i=0;k=0;
        while(n>0)
    {
        p=n%2;
        n=n/2;
        if(p==1)
        {k++;}
        a[i]=p;
        i++;
        }
        printf("The parity of ");
       for(j=i-1;j>=0;j--)
       {printf("%d",a[j]);}



    printf(" is %d (mod 2).\n",k);
       }


      return 0;
}

