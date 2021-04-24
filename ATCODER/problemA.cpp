#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,b1,e1,f1,c1,d1,g1,h1,a2,b2,e2,f2,c2,d2,g2,h2;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a1,&b1,&e1,&f1,&c1,&d1,&g1,&h1,&a2,&b2,&e2,&f2,&c2,&d2,&g2,&h2);
    int a=max(a1,a2);
    int b=max(b1,b2);
    int c=min(c1,c2);
    int d=min(d1,d2);
    if(c-a<0||d-b<0)
    {
        printf("0");
    }
    else
    {
        printf("%d",(c-a)*(d-b));
    }
    return 0;
}
/*
1 3
18 3
18 10
1 10
19 5
26 5
26 7
19 7
*/
