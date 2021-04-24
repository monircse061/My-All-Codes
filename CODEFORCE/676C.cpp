#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a=0,b=0;
    scanf("%d %d",&n,&m);
    string s;
    cin>>s;
    int sum=0,i=0,j=0,k;
    while(i<n)
    {
        if(s[i]=='a')
        {
            a++;
        }
        if(s[i]=='b')
        {
            b++;
        }
        if(a<=m||b<=m)
        {
            k=i-j+1;
            sum=max(sum,k);
            //cout<<sum<<" "<<i<<" "<<j<<endl;
        }
        else
        {
            if(s[j]=='a')
                a--;
            else
                b--;
            j++;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}
