#include <stdio.h>
void main()
{
    int n, i,j, k = 0,sum=0;
    printf("Enter the limit\n");
    scanf("%d", &n);
    printf("Series:");
    for (i = 7; i <= n; i+=10)
    {int k=0;
        for (j = 2; j <=i / 2; j++)
        {
            if (i % j == 0)
               { k = 1;
               break;
               }
            else
                {k = 0;
                }
        }
        if (k == 0)
        {
            printf("%d ",i);
            sum += i;
        }
        
    }
    
    
    printf("\n");
    printf("sum:%d",sum);
}
