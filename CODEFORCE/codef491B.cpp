#include<bits/stdc++.h>
using namespace std;
int main()
{
    double avg;
    int a[10000],n,cont,i=0,sum=0,num=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=(double)sum/n;
    sort(a,a+n);
    while(1)
    {
        if(avg>=4.5)
        {
            cout<<num;
            break;
        }
        cont=(5-a[i]);
        sum+=cont;
        avg=(double)sum/n;
        if(cont!=0)
        {
            num++;
        }
        i++;
    }
    return 0;
}
