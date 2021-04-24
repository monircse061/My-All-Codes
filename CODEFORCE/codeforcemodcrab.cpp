#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,a1,c1,h2,a2,i=0,j=0,a[1000];
    scanf("%d %d %d %d %d",&h1,&a1,&c1,&h2,&a2);
    while(h2>0)
    {     j++;
        if((h2-a1)<=0){
            a[i]=1;
            break;
        }
       else if((h1-a2)>0){
            h2=h2-a1;
            a[i]=1;
            h1=h1-a2;

        }
        else
        {
            h1=h1+c1;
            a[i]=0;
            h1=h1-a2;

        }
        i++;
    }
    printf("%d\n",j);
    for(i=0; i<j; i++)
    {
        if(a[i]==0)
            printf("HEAL\n");
       else

            printf("STRIKE\n");

    }
    return 0;
}
