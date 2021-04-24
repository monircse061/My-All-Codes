#include<bits/stdc++.h>
using namespace std;
string a[2*10005];
int sum[100000];
int main()
{
    int n1,m,k,n,l1;
    scanf("%d %d %d",&n1,&m,&k);
    int cont=0,l;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0; i<n1; i++)
    {
        n=0;
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='.')
            {
                n++;
                sum[j]++;
            }
            else{
                n=0;sum[j]=0;
            }
            if(n>=k){
               cont++;
            }
                    if(sum[j]>=k)
                    {
                        cont++;
                    }
        }
    }
    if(k==1){
        cout<<cont/2;
    }
    else{
    printf("%d",cont);}
    return 0;
}
