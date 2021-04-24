#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[10000],cont=0,cont1=0;
    scanf("%d",&n);
    for(int i=0; i<n/2; i++)
    {
        scanf("%d",&a[i]);

    }
    sort(a,a+n/2);
    int c=1,d=2;

    for(int i=0;i<n/2;i++){

        cont+=abs(c-a[i]);
        cont1+=abs(d-a[i]);

        c+=2;
        d+=2;
    }
    if(cont<cont1)
    {
        cout<<cont<<endl;
    }
    else
    {
       cout<<cont1<<endl;
    }
    return 0;
}
