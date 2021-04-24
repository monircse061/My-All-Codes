#include<stdio.h>

int main()
{
    int t,x,y,z,l,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&x,&y,&z);
        l=z+y-x;
        if(l==0)
            printf("Case %d: %d\n",i,x);
        else if(l<0)
            printf("Case %d: %d\n",i,y+z);
        else if(l>0){
            if(l%x==0)
                  printf("Case %d: %d\n",i,x);
            else
            printf("Case %d: %d\n",i,l%x);}
    }
    return 0;
}
