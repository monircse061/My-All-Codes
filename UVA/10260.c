#include<stdio.h>
#include<string.h>
#define val 10000
int main(){
    int m,n,i,j;char s[val],a[val];
    while(scanf("%s",s)!=EOF){
    n=strlen(s);j=0;
    for(i=0;i<n;i++){

        if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V'){
           j++;
            a[j]=1;

            while(s[i+1]=='B'||s[i+1]=='F'||s[i+1]=='P'||s[i+1]=='V'){
                i++;
            }}
        else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z'){
                j++;a[j]=2;
        while(s[i+1]=='C'||s[i+1]=='J'||s[i+1]=='G'||s[i+1]=='K'||s[i+1]=='Q'||s[i+1]=='S'||s[i+1]=='X'||s[i+1]=='Z'){
            i++;
        }}
        else if(s[i]=='D'||s[i]=='T'){
            j++;a[j]=3;
            while(s[i+1]=='D'||s[i+1]=='T'){
                i++;
            }
        }
       else if(s[i]=='L'){
        j++;a[j]=4;
        while(s[i+1]=='L'){
            i++;
        }}
        else if(s[i]=='M'||s[i]=='N'){
            j++;a[j]=5;
            while(s[i+1]=='M'||s[i+1]=='N'){
                i++;
            }
        }
        else if(s[i]=='R'){
            j++;a[j]=6;
            while(s[i+1]=='R'){
                i++;
            }
        }

    }
    for(m=1;m<=j;m++){
        printf("%d",a[m]);
    }
    printf("\n");}
    return 0;
}
