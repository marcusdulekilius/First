#include <stdio.h>
#include <stdlib.h>

void targetfinder()
{
    int i,j,n,t;
    printf("Enter target: ");
    scanf("%d",&t);
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element: ",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==t)
            {
                printf("[%d,%d] ",A[i],A[j]);
            }
        }
    }
}
int main()
{
    targetfinder();
    return 0;
}
