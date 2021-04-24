#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,R;
    scanf("%d %d",&n,&r);
    while(n--)
    {
        //
        scanf("%d",&R);
//fflush(stdin);
        if(R>=r)
        {
            printf("Good boi\n");
        }
        else
        {
            printf("Bad boi\n");
        }
        getchar();
    }
    return 0;
}

