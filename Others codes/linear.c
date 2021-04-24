#include<stdio.h>
#include<stdlib.h>

int main(int arry,int size,int value)
{
    int myarry[]={2,4,5,6,7};
    int size=5;
    int value;
    while(1)
    {
        scanf("%d",&value);
        printf("%d",linear(arry,size,value));
    }
    return 0;
}
int linear(int *arry,int size,int value)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arry[i]==value)
            return 1;
    }
    return -1;
}

