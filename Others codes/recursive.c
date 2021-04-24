#include<stdio.h>
int function(int n){
    if(n==0){
        return 1;
    }
    else
        return n*function(n-1);
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",function(a));
    return 0;
}
