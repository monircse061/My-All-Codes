#include<stdio.h>
struct Struct{
  int a;
  float b;
  char c;
};
int main(){
   struct Struct obj;
   printf("%d",sizeof(obj));
   return 0;

}
