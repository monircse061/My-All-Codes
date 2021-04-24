#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sub,ans,num;
    scanf("%d",&n);
    num=(sqrt(n));
    sub=abs((num*num)-n);
    ans=sub-(num*(sub/num));
    if(ans!=0)ans=1;
    cout<<ans+(2*num)+(sub/num);
    //main();
    return 0;
}
