#include<bits/stdc++.h>
using namespace std;
int main()
{
    double l,r,x,y,k,a,b,c;
    scanf("%lf %lf %lf %lf %lf",&l,&r,&x,&y,&k);
    for(int i=x; i<=y; i++)
    {
        a=i*k;
        if(a>=l&&a<=r)
        {
            cout<<"YES";
            return 0;
        }
    }
    printf("NO");
    return 0;
}
