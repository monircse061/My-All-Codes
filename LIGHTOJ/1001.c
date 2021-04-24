#include<stdio.h>
int main(){
   int test,a,b;
   scanf("%d",&test);
   while(test--){
    scanf("%d",&a);
    if(a<=10)
    printf("0 %d\n",a);
    else
        printf("%d 10\n",a-10);
   }
   return 0;
}
