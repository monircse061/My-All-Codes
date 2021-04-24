#include<stdio.h>
main()
{
    int array[3][3]={
    {45,67,87},{56,87,34},{55,76}};
    array[2][1]=50;
    printf("%d",array[2][1]);
    return 0;
}
