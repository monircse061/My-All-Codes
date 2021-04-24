#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,x3,v1,v2,t1,t2,t;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf",&x1,&x2,&x3,&v1,&v2);
        t1=(abs(x3-x1))/v1;
        t2=(abs(x3-x2))/v2;
        if(t1<t2)
        {
            printf("Chef\n");
        }
        else if(t2<t1)
        {
            printf("Kefa\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}

