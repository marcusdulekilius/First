#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,j,flag;
    allen:
    printf("Enter the closed interval: ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        printf("Please enter the less number first. \n");
        goto allen;
    }
    printf("-------- Prime Numbers Between %d and %d --------\n",n1,n2);
    for(i=n1; i<=n2; i++)
    {
        flag=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                flag++;

        }if(flag==0)
        //this proves that it's a prime number
                printf("%d \t",i);
    }
    return 0;
}
