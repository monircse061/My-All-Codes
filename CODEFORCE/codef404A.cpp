#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
    string s,s1[1000];
    int n,sum=0;
    scanf("%d",&n);
    s1[0]="Tetrahedron";
    s1[1]="Cube";
    s1[2]="Octahedron";
    s1[3]="Dodecahedron";
    s1[4]="Icosahedron";
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        m[s]++;
    }
    for(int i=0; i<5; i++)
    {
        if(i==0)
            sum+=m[s1[i]]*4;// 6 8 12 20
        else if(i==1)
        {
            sum+=m[s1[i]]*6;
        }
        else if(i==2)
        {
            sum+=m[s1[i]]*8;
        }
        else if(i==3)
        {
            sum+=m[s1[i]]*12;
        }
        else
        {
            sum+=m[s1[i]]*20;
        }
    }
    printf("%d",sum);
    return 0;
}
