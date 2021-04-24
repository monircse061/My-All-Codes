#include<bits/stdc++.h>
using namespace std;
int main() {
    int r,c;
    char s[1000][1000];
    scanf("%d %d",&r,&c);
    for(int i=0; i<r; i++) {
        scanf("%s",s[i]);
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(i%2==0&&s[i][j]=='.') {
                if(j%2==0) {
                    s[i][j]='B';
                } else {
                    s[i][j]='W';
                }
            } else if(s[i][j]=='.') {
                if(j%2==0) {
                    s[i][j]='W';
                } else {
                    s[i][j]='B';
                }
            }
        }
    }
    for(int i=0; i<r; i++) {
        printf("%s\n",s[i]);
    }
    return 0;
}
