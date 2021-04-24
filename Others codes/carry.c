#include<stdio.h>
int main()
{
    int i1,i2,i,s,n1,n2,j;
    while(scanf("%d%d",&n1,&n2)&&n1!=0||n2!=0)
    {

        i=0;j=0;
        while(n1>0||n2>0)
        {
            i1=n1%10+j;
            i2=n2%10;
            s=i1+i2;
            if(s>=10)
            {   j=1;
                i++;}

            else
            {j=0;}
            n1=n1/10;
            n2=n2/10;



        }
        if(i==1)
        {
            printf("%d carry operation.\n",i);
        }
        else if(i>1)
        {
            printf("%d carry operations.\n",i);
        }
        else
        {
            printf("No carry operation.\n");
        }
    }
    return 0;
}
