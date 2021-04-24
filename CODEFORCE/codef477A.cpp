#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,d,d1,d2,re,re1,h,m,x=1;
    int a[100000],b[100000];
    cin>>n>>s;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    int i=0;
    if((a[i]*3600)+(b[i]*60)>=(s+1)*60){
        cout<<0<<" "<<0;x=0;
    }
    if(n==1&&x==1)
    {

        h=(a[i]*3600)+(b[i]*60);
        re=(h+((s+1)*60))/3600;
        re1=(((h+((s+1)*60))%3600)/60);
        x=0;
        cout<<re<<" "<<re1;
    }
    for(int i=0; i<n-1&&x==1; i++)
    {
        h=(a[i]*3600)+(b[i]*60);
        m=(a[i+1]*3600)+(b[i+1]*60);
        d=abs(m-h);
        d1=d-((s+1)*60);
        d2=d1-((s+1)*60);
        //cout<<d2<<" ";
        if(d2>=0)
        {
            re=(h+((s+1)*60))/3600;
            re1=(((h+((s+1)*60))%3600)/60);
            x=0;
            cout<<re<<" "<<re1;
            break;
        }
    }
    if(x==1)
    {
        re=(m+((s+1)*60))/3600;
        re1=(((m+((s+1)*60))%3600)/60);
        cout<<re<<" "<<re1;
    }
    return 0;
}
