#include<bits/stdc++.h>
using namespace std;
int n,x,y;
int main(){
    scanf("%d",&n);
    x=n%10;
    if(x==0){
        printf("%d\n",n);
    }
    else if((10-x)>=x)
    {printf("%d\n",n-x);}
    else{
        printf("%d\n",(n+(10-x)));
    }
    return 0;
}
