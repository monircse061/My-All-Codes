#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int main()
{
    long long int n,m1,a,cont=0,sum=0;
    scanf("%I64d %I64d",&n,&m1);
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a);
        m[a]++;
    }
    for(int i=1;i<1000001;i++){

        if(cont>=m1){
            printf("%I64d",sum);
            break;
        }
       if(m[i]==0){
          sum+=i;
          cont++;
       }
    }
    return 0;
}
