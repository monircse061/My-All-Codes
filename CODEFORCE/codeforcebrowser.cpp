#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,p,r,x,y,z,a=1,b=1,k,l;
    scanf("%d %d %d %d",&m,&n,&p,&r);
    for(int i=1;i<=m;i++){
        if(i<p){a=0;}
        if(i>r){b=0;}
    }
    if(a==0&&n-p<=r-n&&b==0&&n>=p){
        x=abs((n-p)*2)+1;a=1;
    }
    else if(r<n&&a==0){x=abs(r-p)+1;a=1;}
    else if(a==0){
        x=abs(n-p)+1;
    }
    else
        {x=0;}
      if(a==0&&n-p>r-n&&b==0){y=abs((r-n)*2)+1;}
      else if(p>n&&b==0){y=abs(r-p)+1;}
      else if(b==0){
        y=abs(r-n)+1;
     }
     else
        {y=0;}
        printf("%d\n",x+y);
        return 0;
}
