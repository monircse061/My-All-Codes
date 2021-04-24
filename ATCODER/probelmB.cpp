#include<bits/stdc++.h>
using namespace std;
struct abc
{
    int s,f,pos;
};
abc Time[10000];
bool compare(abc a,abc b)
{
    return a.f<b.f;
}
void activity_selection(int n)
{
    int j=1;
    printf("%d %d\n",Time[j].s,Time[j].f);
    for(int i=2; i<=n; i++)
    {
        if(Time[i].s>=Time[j].f)
        {
            printf("%d %d\n",Time[i].s,Time[i].f);
            j=i;
        }
    }
}
int main()
{
    int n,x,y;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d %d",&Time[i].s,&Time[i].f);
        Time[i].pos=i;
    }
    sort(Time+1,Time+n+1,compare);
    activity_selection(n);
    return 0;
}

