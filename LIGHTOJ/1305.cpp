#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int x,y,x1,y1,x2,y2,x3,y3,x4,y4,length,width,test,area,j=0;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        x4=x1+x3-x2;
        y4=y1+y3-y2;
        x=(x1+x3)/2;y=(y1+y3)/2;
        area=.5*(((x1*y2)+(x2*y3)+(x3*y4)+(x4*y1))-((y1*x2)+(y2*x3)+(y3*x4)+(y4*x1)));
        //if(area<0)

        j++;
        printf("Case %d: %d %d %d\n",j,x4,y4,abs(area));

    }
    return 0;
}
