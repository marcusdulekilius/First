#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ar1,ar2,i,suma=0,sumb=0;
    char op;
    srand(time(NULL));
    printf("How many elements do you want in the array 1? ");
    scanf("%d",&ar1);
    int A[ar1];
    printf("How many elements do you want in the array 2? ");
    scanf("%d",&ar2);
    int B[ar2];
    //Making arrays and calculating their numerical value
    //Basically, reverse the arrays 
    //Example: A=[1,2,3]'s numerical value is 321.
    for(i=0; i<ar1; i++)
    {
        A[i]=rand()%10;
        suma=suma+A[i]*pow(10,i);
    }
    for(i=0; i<ar2; i++)
    {
        B[i]=rand()%10;
        sumb=sumb+B[i]*pow(10,i);
    }
    printf("A[ ");
    for(i=0; i<ar1; i++)
    {
        printf("%d ",A[i]);
    }
    printf("] \n");
    printf("B[ ");
    for(i=0; i<ar2; i++)
    {
        printf("%d ",B[i]);
    }
    printf("] \n");
door:
    printf("Enter the operation you want to do with arrays: \n");
    printf(" + - * / ");
    scanf("%c",&op);
    switch(op)
    {
    case '+':
        printf("%d",suma+sumb);
        break;
    case '-':
        printf("%d",suma-sumb);
        break;
    case '*':
        printf("%d",suma*sumb);
        break;
    case '/':
        printf("%f",(float)suma/sumb);
        break;
    default:
        printf("Error! Operator is not correct.\n");
        goto door;
    }
    return 0;
}
