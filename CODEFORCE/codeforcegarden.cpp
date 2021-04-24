#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,l,i,j,a[1000],x,y,z=1,p;
     scanf("%d %d",&n,&l);
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(l%a[i]==0){
            x=l/a[i];
            if(z==1){p=a[i];z=0;y=x;}
            if(p<a[i])
                {y=x;p=a[i];}
        }
     }
     printf("%d\n",y);
     return 0;
}
