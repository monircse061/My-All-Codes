#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
double r1,r2,r3,a,b,c,x,y,s,A,B,C,a1,a2,a3,n,n1;int test,i=0;
scanf("%d",&test);
while(test--){
    scanf("%lf %lf %lf",&r1,&r2,&r3);
        i++;
    a=r1+r2;b=r1+r3;c=r2+r3;
    s=(a+b+c)/2;
    x=s*(s-a)*(s-b)*(s-c);
    n=sqrt(x);
    A=acos((b*b+c*c-a*a)/(2*b*c));
    B=acos((a*a+c*c-b*b)/(2*a*c));
    C=acos((a*a+b*b-c*c)/(2*a*b));
    a1=.5*r3*r3*A;
    a2=.5*r2*r2*B;
    a3=.5*r1*r1*C;
    n1=n-(a1+a2+a3);
    printf("Case %d: %lf\n",i,abs(n1));
}
return 0;
}
