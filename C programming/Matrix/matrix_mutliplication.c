
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    int sum=0;
    //Part 1
    printf("Enter the rows and columns of matrix A:");
    scanf("%d %d",&arows,&acolumns);

    printf("Enter the elements of matrix A:\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acolumns;j++)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the rows and columns of matrix B:");
    scanf("%d %d",&brows,&bcolumns);

    if(brows!=acolumns)
    {
        printf("Sorry, We cannot multiply the matrices A and B");
    }
    else
    {
        printf("Enter the elements of matrix B:\n");
        for(i=0;i<brows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                printf("Enter element b%d%d: ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }

        printf("\n");
        for(i=0;i<arows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                for(k=0;k<brows;k++)
                {
                    sum+= a[i][k]*b[k][j];
                }
                product[i][j]=sum;
                sum=0;
            }
        }

        printf("Resultant matrix \n");
        for(i=0;i<arows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                printf("%d ",product[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
