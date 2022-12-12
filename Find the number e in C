#include <stdio.h>
#include <stdlib.h>
//To find factorial of an integer
float fact(float x)

{
    int fact=1;
    for(int i=2;i<=(int)x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
//To find the number e, we must use a formula.
//The formula is 1+ 1/1! + 1/2! + 1/3!...
//Longer you go, your result will get closer to the number e.
float find_e(float n)
{
    int i,j;
    float sum=0;
    for(i=1;i<=(int)n;i++)
    {
        sum=sum+1.0/fact(i);
    }
    return sum+1;
}
int main()
{
    float n,e=2.71828182;
    printf("Enter n: ");
    scanf("%f",&n);
    printf("The result in step %.0f is: %f\n",n,find_e(n));
    printf("Approximate distance to number e in step %.0f is: %f",n,e-find_e(n));
    return 0;
}
