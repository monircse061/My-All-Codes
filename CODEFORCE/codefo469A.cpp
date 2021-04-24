#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,l1,l2,x,y;
    //while(!=EOF){
    scanf("%d %d %d",&l,&r,&a);
    x=1;
    y=1;
    if((l==0&&a==0)||(r==0&&a==0)||(l==0&&r==0&&a==0))
    {
        x=0;
        y=0;
    }
    else if(l+a<r)
    {
        y=0;
        l1=l+a;
        l2=r-(r-(l+a));
    }
    else if(r+a<l)
    {
        y=0;
        l2=r+a;
        l1=l-(l-(r+a));
    }
    else if(l==r)
    {
        y=0;
        l1=l+a/2;
        l2=r+a/2;
    }
    else
    {
        l1=l;
        l2=r;
    }
    while(y==1)
    {
        if(l1<l2)
        {
            l1=l1+1;
            a--;
        }
        else if(l2<l1)
        {
            l2=l2+1;
            a--;
        }
        if(l1==l2||a==0)
        {
            l1=l1+a/2;
            l2=l2+a/2;
            break;
        }
    }
    if(x==0)
        cout<<"0"<<endl;
    else
        cout<<l1+l2<<endl;//}
    return 0;
}
