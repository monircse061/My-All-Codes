#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    char c,c1;
    int sum,d,t,j=0;
    int d1,d2,y1,y2;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s1;
        sum=0;
        int x=0,y=0;
        scanf("%d %c %d",&d1,&c,&y1);
        cin>>s2;
        scanf("%d %c %d",&d2,&c1,&y2);
        int f=(y1-1)/4-(y1-1)/100+(y1-1)/400;
        int l=y2/4-y2/100+y2/400;
        int result=l-f;
        if(y2%400==0||(y2%4==0&&y2%100!=0))
        {
            if(s2=="January"||s2=="February"&&d2<29)
            {
                result--;
            }
        }
        if(y1%400==0||(y1%4==0&&y1%100!=0))
        {
            if(s1!="January"&&s1!="February")
            {
                result--;
            }
        }j++;
        printf("Case %d: %d",j,result);
        //if(t!=0)
            printf("\n");
    }
    return 0;
}
