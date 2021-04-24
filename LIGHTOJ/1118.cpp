#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,r1,x2,y2,r2,num,x,y,dis,a,b,c,angle,dif,dig,dif1,t,j=0;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&r1,&x2,&y2,&r2);
        dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        j++;
        if(dis>=r1+r2)
        {
            printf("Case %.f: 0\n",j);
        }
        else if(dis+r1<=r2)
        {
            printf("Case %.f: %f\n",j,acos(-1)*r1*r1);
        }
        else if(dis+r2<=r1)
        {
            printf("Case %.f: %f\n",j,acos(-1)*r2*r2);
        }
        else
        {
            a=dis,b=r2,c=r1;
            angle=2*(acos((a*a+c*c-b*b)/(2*a*c)));
            dig=(180*angle)/acos(-1);
            dif=.5*r1*r1*(angle-sin(angle));
            angle=2*(acos((a*a+b*b-c*c)/(2*a*b)));
            dig=(180*angle)/acos(-1);
            dif1=.5*r2*r2*(angle-sin(angle));
            printf("Case %.f: %f\n",j,dif+dif1);
        }
    }
    return 0;
}
