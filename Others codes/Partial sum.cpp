#include<bits/stdc++.h>
using namespace std;

int in() {
    int n;
    scanf("%d", &n);
    return n;
}

int a[100], b[100];

int main() {
    int n=in(), q=in();
    for(int i=1; i<=n; i++) {
        a[i]=in();
    }
    while(q--) {
        int l=in(), r=in(), vl=in();
        b[l]+=vl;
        b[r+1]-=vl;
    }
    for(int i=1; i<=n; i++) {
        b[i]+=b[i-1];
    }
    for(int i=1; i<=n; i++) {
        printf("%d ", a[i] + b[i]);
    }
    printf("\n");

    return 0;
}

