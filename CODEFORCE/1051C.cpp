#include<bits/stdc++.h>
using namespace std;
int cont[100009];
char ch[100009];
int main() {
    int n,a[10009],x=1,num=0,y=1,z=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        scanf("%d",&a[i]);
        cont[a[i]]++;
        if(cont[a[i]]>1) {
            x=0;
        }
    }
    for(int i=1; i<=n; i++) {
        if(cont[a[i]]>2) {
            z=1;
        }
        if(cont[a[i]]==1) {
            num++;
            y=0;
            cont[a[i]]=0;
        } else if(cont[a[i]]>2) {
            ch[a[i]]='A';
            cont[a[i]]=0;
        } else if(cont[a[i]]==2) {
            ch[a[i]]='B';
            cont[a[i]]=0;
        }
    }
    if(x==1) {
        if(n%2==0) {
            printf("YES\n");
            for(int i=1; i<=n; i++) {
                if(i<=n/2) {
                    printf("A");
                } else {
                    printf("B");
                }
            }
        }
        else
        printf("NO");
    } else if(y==1) {
        printf("YES\n");
        for(int i=1; i<=n; i++) {
            printf("A");
        }
    } else if(num%2==0) {
        printf("YES\n");
        int len=num/2,l=0;
        for(int i=1; i<=n; i++) {
            if(ch[a[i]]=='\0'&&l<len) {
                l++;
                printf("A");
            } else if(ch[a[i]]=='\0'&&l>=len) {
                printf("B");
            } else {
                printf("A");
            }
        }
    } else if(num%2!=0&&z==1) {
        printf("YES\n");
        int len=num/2,l=0;
        for(int i=1; i<=n; i++) {
            if(ch[a[i]]=='\0'&&l<len) {
                l++;
                printf("A");
            } else if(z==1&&ch[a[i]]=='A') {
                printf("A");
                z=0;
            } else {
                printf("B");
            }
        }
    } else {
        printf("NO");
    }
    return 0;
}
