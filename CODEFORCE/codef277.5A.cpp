#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s,num,s1,s2;
    string a,b;
    scanf("%d %d",&m,&s);
    s1=s;
    if(s1==0&&m>1)
    {
        printf("-1 -1");
        return 0;
    }
    else if(m==1&&s==0){
        printf("0 0");
        return 0;
    }
    for(int i=0; i<m; i++)
    {
        //for(int j=0;j<10;j++){
        num=min(s1,9);
        s1-=num;
        a+='0'+num;
    }
    if(s1>0)
    {
        printf("-1 -1");
        return 0;
    }
    s2=s;
    for(int i=m-1; i>=0; i--)
        b+=a[i];
    if(b[0]=='0')
    {
        b[0]++;
        for(int i=1; i<m; i++)
        {
            if(b[i]!='0')
            {
                b[i]--;
                break;
            }
        }
    }
    cout<<b<<" "<<a;
    return 0;
}
