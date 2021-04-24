#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,x,y,z,x1,y1,z1;
    char ch[10000];
    scanf("%d",&t);
    for(int i=1; i<=t; i++) {
        scanf("%s",ch);
        x=0,y=0,z=0;
        for(int i=0; i<strlen(ch); i++) {
            if(ch[i]>='a'&&ch[i]<='z') {
                x=1;
            } else if(ch[i]>='A'&&ch[i]<='Z') {
                y=1;
            } else {
                z=1;
            }
        }
        if(x==1&&y==1&&z==1) {
            printf("%s\n",ch);
        } else {
            if(x==0&&y==1&&z==1) {
                y1=0,z1=0;
                for(int i=0; i<strlen(ch); i++) {

                    if(ch[i]>='A'&&ch[i]<='Z') {
                        y1++;
                    } else {
                        z1++;
                    }
                     if(y1>1||z1>1) {
                        ch[i]='a';
                        break;
                    }

                }
            } else if(y==0&&x==1&&z==1) {
                x1=0,z1=0;
                for(int i=0; i<strlen(ch); i++) {

                    if(ch[i]>='a'&&ch[i]<='z') {
                        x1++;
                    } else  {
                        z1++;
                    }
                    if(x1>1||z1>1) {
                        ch[i]='A';
                        break;
                    }
                }
            } else if(z==0&&x==1&&y==1) {
                x1=0,y1=0;
                for(int i=0; i<strlen(ch); i++) {

                    if(ch[i]>='a'&&ch[i]<='z') {
                        x1++;
                    } else {
                        y1++;
                    }
                     if(x1>1||y1>1) {
                        ch[i]='1';
                        break;
                    }
                }

            } else if(x==0&&y==0&&z==1) {

                ch[0]='a',ch[1]='A';
            } else if(y==0&&z==0&&x==1) {
                ch[0]='A',ch[1]='1';

            } else if(x==0&&z==0&&y==1) {
                ch[0]='a',ch[1]='1';
            }
            printf("%s\n",ch);
        }
    }
    return 0;
}
