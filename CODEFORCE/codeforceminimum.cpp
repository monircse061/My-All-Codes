#include<bits/stdc++.h>
using namespace std;
#define val 1000000
int a[val],b[val];
int main(){
    int i,j=0,x,y,l=0,z,c=0,n;

    scanf("%d %d",&n,&a[0]);
    x=a[0];
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(x>=a[i])
        {x=a[i];
        }}
    for(i=0;i<n;i++){

        if(a[i]==x)
            {l++;}
        if(l==1)
        {j++;}
        if(l==2)
        {
         b[c]=j;
         l=1;j=1;
         c++;
        }
    }
    sort(b,b+c);
    printf("%d",b[0]);
    return 0;
}
