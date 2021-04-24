#include<stdio.h>
int main()
{
    int i,j,a[100][100],b[100][100],x,y,z,c[100][100],k,l;
    scanf("%d%d",&x,&y);
    printf("mat=a\n");
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            scanf("%d",&a[i][j]);
    scanf("%d",&z);
    scanf("%d",&y);
    printf("mat=b\n");
    for(k=0; k<z; k++)
        for(l=0; l<y; l++)
            scanf("%d",&b[k][l]);
    printf("mat=c\n");
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            c[i][j]=a[i][j]+b[i][j];
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
