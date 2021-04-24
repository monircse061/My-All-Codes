#include<bits/stdc++.h>
using namespace std;
int modInverse(int A,int M)
{
    A=A%M;
    for(int B=1; B<M; B++)
        if(((A*B)%M)==1)
            return B;
        }

int main()
{
   int a,m;
   scanf("%d %d",&a,&m);
   cout<<modInverse(a,m);
   return 0;
}
