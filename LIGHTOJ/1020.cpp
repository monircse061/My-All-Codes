#include<bits/stdc++.h>
using namespace std;
char s[1000009];
int main()
{
    int t,n,j=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",s);
    j++;
        if(s[0]=='A')
        {
            if(n%3==1)
            {
                printf("Case %d: Bob\n",j);
            }
            else
            {
                printf("Case %d: Alice\n",j);
            }
        }
        else
        {
            if(n%3==0)
            {
                printf("Case %d: Alice\n",j);
            }
            else
            {
                printf("Case %d: Bob\n",j);
            }
        }
    }
    return 0;
}
