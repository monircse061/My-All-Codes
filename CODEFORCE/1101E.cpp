#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Min=INT_MIN,Max=INT_MIN,x,y,temp;
    char ch;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf(" %c %d %d",&ch,&x,&y);
        if(ch=='+')
        {
            if(x>y)
            {
                temp=x;
                x=y;
                y=temp;
            }
            Min=max(Min,x);
            Max=max(Max,y);
        }
        else
        {
            if(x>y)
            {
                temp=x;
                x=y;
                y=temp;
            }
            if(Min<=x&&Max<=y)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
