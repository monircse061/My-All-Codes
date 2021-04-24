#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,d,x=1,y,z=0,sum=0,j1=0,j=0;
    scanf("%d %d",&n,&m);
    d=abs(n-m);
    if(d%2!=0){
        x=0;
    }
        j=d/2;
        j1=j;

    if(x==0){
        j1++;
    }
    for(int i=0;i<j;i++){
            z++;
        sum=sum+z;
    }z=0;
    for(int i=0;i<j1;i++){
        z++;
        sum=sum+z;
    }
    cout<<sum;
    return 0;
}
