#include<stdio.h>
int main()
{
    int a[10000],i=0,t,j,k;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while(t--)
    {
        j=0;
        k=0;
        for(i=0; i<10; i++)
            scanf("%d",&a[i]);

        while(a[0]>a[9] && j<9)
        {
            if(a[j]<a[j+1])
                break;
            j++;
        }


        while(a[0]<a[9] && k<9)
        {
            if(a[k]>a[k+1])
                break;
            k++;
        }

        if(j==9 || k==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");

    }
    return 0;

}
