#include<stdio.h>
#include<string.h>
#define val 10000
int main(){
    char s[val];
    int i,j,k,ln;
  while(gets(s)){
  ln=strlen(s);
  for(i=0;i<ln;i++){
    if(s[i]!='o'&&s[i]!='u'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='y'&&s[i]!='O'&&s[i]!='U'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='Y'){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]+32;
            }
        printf("%c%c",'.',s[i]);
    }
  }
  printf("\n");}
  return 0;
}
