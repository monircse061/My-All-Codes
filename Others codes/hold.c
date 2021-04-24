#include<stdio.h>
int main(){
    int m,n,p,l,a,b,c,d;
   while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
   {
       m=b-a;
   n=m-c;
   if(c<a&&c>b)
    printf("0\n");
   else if(c>=a&&d<=b)
    printf("%d\n",d-c);
    else
        printf("%d\n",n);
   }
  return 0;
}
