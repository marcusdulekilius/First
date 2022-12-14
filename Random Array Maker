#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arraymaker(int n,int x)
{
    int i,A[n];
    printf("A[ ");
    srand(time(NULL));
    //To choose elements randomly.
    for(i=0; i<n; i++)
    {

        A[i]=rand()%x+1;
        //With taking x's mode and adding 1, we limited elements between 1 and x.
        printf("%d ",A[i]);
    }
    printf("]\n");
}

int main()
{
    int n,x;
    float quarter;
Home:
    printf("How many elements do you want in the array?: ");
    scanf("%d",&n);
    printf("What interval would you like the numbers to be in? (Of course between 0 and itself): ");
    // If you enter a negative number, program will take it as its absolute value.
    scanf("%d",&x);
    if(n<=0)
    {
        printf("I'm vengeance... I'm the knight... I AM THE ARRAY!! \n");
    goto Home;
    }

    arraymaker(n,x);
    quarter= (float)(n+1)/4.0;
    printf("Quarter: %.2f",quarter);
    return 0;
}
