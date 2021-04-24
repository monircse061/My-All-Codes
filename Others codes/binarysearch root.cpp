#include<bits/stdc++.h>
using namespace std;
double Sqrt(int n)
{
    double l=0.0, u=n,mid;int i=1;
    while(i<=64)///u-l>=.0001
    {
         mid=(u+l)/2;
         cout<<mid<<" ";
        if(mid*mid==n)
        {
            break;
        }
        else if(mid*mid>n)
        {
            u=mid;
        }
        else
        {
            l=mid;
        }i++;
    }
    return mid;
}
int main()
{
    int n;
    scanf("%d",&n);
    double x=Sqrt(n);
    printf("%.2lf",x);
    return 0;
}
