#include<stdio.h>
#include<string.h>
int main()
{
    int T,A,B,c,d;
    scanf("%d",&T);
    while(T--)
        {scanf("%d%d",&A,&B);
        if(A<B)
            printf("%d\n",B-A);
            else if(A>B)
                printf("%d\n",A-B);
            else if(A==0&&B==0)
                printf("\n");}


    return 0;
}





