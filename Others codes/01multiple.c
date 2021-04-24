#include<stdio.h>
 main()
{
    char N[1000];
    while(scanf("%s",N)&&N!=0)
    {


       if(N[0]%11==0)
            printf("%s is a multiple of 11.\n",N);
        else
            printf("%s is not a multiple of 11.\n",N);
    }
    return 0;
}
