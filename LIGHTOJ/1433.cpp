#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    double o1,o2,a1,a2,b1,b2,x1,x2,n1,n2,A,y,b;int test,i=0;
    scanf("%d",&test);
    while(test--){
    scanf("%lf %lf %lf %lf %lf %lf",&o1,&o2,&a1,&a2,&b1,&b2);
    x1=sqrt(((a2-o2)*(a2-o2))+((a1-o1)*(a1-o1)));
    x2=sqrt(((b2-a2)*(b2-a2))+((b1-a1)*(b1-a1)));

    A=acos(((2*x1*x1)-(x2*x2))/(2*x1*x1));

    y=(A/(2*acos(-1)))*(2*acos(-1)*x1);
    i++;
    printf("Case %d: %lf\n",i,y);
    }
    return 0;
}
