#include<stdio.h>
main()
{
    int N;
    while(scanf("%d",&N)&&N!=0)
    {
        if(N%11==0)
        printf("%d is a multiple of 11.\n",N);
    else
        printf("%d is not a multiple of 11.\n",N);}
    return 0;
}
