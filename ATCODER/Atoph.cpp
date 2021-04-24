/**#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    if(n>=1&&n<=10){
        printf("Avenger %d Rocks\n",n);
    }
    else{
        printf("Avenger %d Sucks\n",n);
    }}
    return 0;
}**/
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int l = 1, r = 1000000;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        printf("%d\n", mid);
        fflush(stdout);

        char response[3];
        scanf("%s", response);
        if (strcmp(response, "<") == 0)
            r = mid - 1;
        else
            l = mid;
    }

    printf("! %d\n", l);
    fflush(stdout);
}
