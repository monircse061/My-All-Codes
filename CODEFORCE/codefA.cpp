#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    int r,c,co=0;char a[1000][1000];
    scanf("%d %d",&r,&c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>x;
            a[i][j]=x;
            if(a[i][j]=='S')
                co++;
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j]=='W')
            {
                if(i+1<r&&a[i+1][j]=='.')
                    a[i+1][j]='D';
                if(i-1>=0&&a[i-1][j]=='.')
                    a[i-1][j]='D';
                if(j+1<c&&a[i][j+1]=='.')
                    a[i][j+1]='D';
                if(j-1>=0&&a[i][j-1]=='.')
                    a[i][j-1]='D';
                if(i+1<r&&a[i+1][j]=='S')
                    co--;
                if(i-1>=0&&a[i-1][j]=='S')
                    co--;
                if(j+1<c&&a[i][j+1]=='S')
                    co--;
                if(j-1>=0&&a[i][j-1]=='S')
                    co--;
            }
        }
    }
    if(r==1&&c==1)
        cout<<"Yes"<<endl;
    else if(co==0)
        cout<<"No"<<endl;
    else
    {
        cout<<"Yes"<<endl;
       for(int i=0; i<r; i++)
        {
           for(int j=0; j<c; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
//a[0][4]='D';
  //cout<<a[0][4];
    return 0;
}
