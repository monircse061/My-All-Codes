#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,x;
    while(scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j)!=EOF){
        if(a==f||b==g||c==h||d==i||e==j)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}
