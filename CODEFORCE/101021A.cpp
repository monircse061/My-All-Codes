#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=1,r=1000000;
    char st[10];
    while(l<=r)
    {
        int mid=(l+r)/2;
        printf("%d",mid);
        fflush(stdout);
        scanf("%s",st);
        if(strcmp(st,"<")==0)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    fflush(stdout);
    printf("! %d",l);
    return 0;
}
