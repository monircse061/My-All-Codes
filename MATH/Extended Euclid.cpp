#include<bits/stdc++.h>
using namespace std;
int x1,y1,l=0;
int gcd(int a,int b,int x,int y)
{
    if(a==0)
    {
        x1=0;
        y1=1;
        return b;
    }
    l++;
    int d=gcd(b%a,a,x,y);
    x=x1,y=y1;
    l--;

    x1=y-((b/a)*x);
    y1=x;
    if(l==0)
        cout<<"x= a*"<<x1<<" "<<"y= b*"<<y1<<" ";
    return d;
}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    cout<<"gcd= "<<gcd(a,b,0,0)<<" ";
    return 0;
}
