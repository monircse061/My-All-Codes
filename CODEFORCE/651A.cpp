#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,n1,m1,cont=0;
    scanf("%d %d",&n,&m);
    n1=n,m1=m;
   if(n1==1&&m1==1){
    printf("0");
   }
   else{
        while(1)
        {
            if((n1==0||m1==0)||(n1==1&&m1==1))
            {
                printf("%d",cont);
                break;
            }
            else if(n1>m1)
            {
                cont++;
                n1-=2;
                m1++;
            }
            else
            {
                n1++,m1-=2;
                cont++;
            }
        }
   }
    return 0;
}
