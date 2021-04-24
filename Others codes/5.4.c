#include<stdio.h>
main()
{
    int a=0,b=0,c=0,d=0,e[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {  scanf("%d",&e[i]);
       if(e[i]>80)
        {a++;}
        else if(e[i]>60)
            {b++;}
        else if(e[i]>40)
            {c++;}
            else if(e[i]<=40)
                d++;
     }
    printf("%d\t%d\t%d\t%d",a,b,c,d);
    return 0;

}
