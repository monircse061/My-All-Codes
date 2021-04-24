#include<stdio.h>
int main(){
   char s[10000];int i,j,k,l,t,a,b,c,d,e,f;
   scanf("%d",&t);
   getchar();
   while(t--){
        j=0;a=0;b=0;c=0;d=0;e=0;f=0;
   gets(s);
   for(i=0;s[i];i++){
    if(s[i]=='M'){
        a++;
    }
    else if(s[i]=='A'){
        b++;
    }
    else if(s[i]=='R'){
        c++;
    }
    else if(s[i]=='G'){
        d++;
    }
    else if(s[i]=='I'){
        e++;
    }
    else if(s[i]=='T'){
        f++;
    }
    if(a>=1&&b>=3&&c>=2&&d>=1&&e>=1&&f>=1){
        j++;a=a-1;b=b-3;c=c-2;d=d-1;e=e-1;f=f-1;
    }
   }
   printf("%d\n",j);}
   return 0;
}
