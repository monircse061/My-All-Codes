#include<bits/stdc++.h>
using namespace std;
int a[10000];
/**void fun(){
     for(int i=2;i*i<=1000;i++){
        if(a[i]==0){
            for(int j=2;i*j<=1000;j++){
                a[i*j]=1;
            }
        }
     }
}**/
int main()
{

    int n,a1,b,j,sum,x;
    scanf("%d",&n);
    for(int i=n/2; i>=1; i--)
    {
        j=n-i;
        x=1;
        if(i<j)
        {
            for(int j1=2; j1*j1<=n; j1++)
            {
                if(i%j1==0&&j%j1==0)
                {
                    x=0;
                    break;
                }
            }

        if(x==1)
        {
            a1=i;
            b=j;
            break;
        }}
    }
    cout<<a1<<" "<<b;
    return 0;
}
