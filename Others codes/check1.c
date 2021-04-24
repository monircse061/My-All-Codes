#include<stdio.h>
#include<string.h>
main()

{
 char* s1[100],s2[100];int i=0,n;
 scanf("%s%s",s1,s2);
 /*while(1)*/
 while(s1[i]==0&&s2[i]==0)
    {i++;
 n=i;}
  if(strlen(s1[n])>strlen(s2[n]))
        printf("s1");
        else if(strlen(s2[n])>strlen(s1[n]))
        printf("s2");
        else if(strcmp(s1[n],s2[n])>0)
            printf("s1");
        else if(strcmp(s1[n],s2[n])<0)
           printf("s2");
 else
    printf("same");
 return 0;
}
