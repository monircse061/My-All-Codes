#include<stdio.h>
#include<string.h>


int main()
{
    char s[100000],t[1000000],i,j,a,b;
    scanf("%d",&b);
    getchar();
    for(i=0;i<b ;i++){
        scanf("%s",s[i]);
    }
    for(j=0;j<b-1;j++){
        if(strcmp(s[j],s[j+1])>0){
            t[j]=s[j];
            s[j]=s[j+1];
            s[j+1]=t[j];
        }
    }
    for(a=0;a<b;a++){
        printf("%s",s[a]);
    }
    return 0;
}
