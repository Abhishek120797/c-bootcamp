#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    //first matrix
    printf("Enter matrix elements : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        {
        printf("[");
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("]\n");
        }
        //transpose of matrix
    printf("transpose of matrix\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            b[i][j]=a[j][i];
    for(i=0;i<3;i++)
        {
        printf("[");
        for(j=0;j<3;j++)
            printf("%d ",b[i][j]);
        printf("]\n");
        }
    return 0;
}
