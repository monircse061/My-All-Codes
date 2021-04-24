#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,num,num1;
    scanf("%d",&N);
    if(N%2==0){
        num=((N/2)+1)*(N/2);
        printf("%d",num);
    }
    else
    {
        num1=((N/2)+1)*((N/2)+1);
        printf("%d",num1);
    }
    return 0;
}
