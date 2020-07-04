#include<stdio.h>
void main()
{
    int a[20][20],r,c,i,j;
    printf("Ener the no. of rows and columns\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements in the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",(*(a+i)+j));
    }
    for(i=0;i<r;i++)
    *(*(a+i)+c-1)+=2;
        for(j=0;j<c;j++)
        *(*(a+0)+j)+=5;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",*(*(a+i)+j));
        printf("\n");
    }

}