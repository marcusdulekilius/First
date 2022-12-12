#include <stdio.h>
#include <stdlib.h>
float find_pi(float n)
//Formula of the number π is 1 -1/3 +1/5 -1/7 +1/9... 
//The longer you go, you'll get closer to the number π.
{
    int i,j;
    float sumplus=0,sumsub=0,sumall=0;
    for(i=1;i<=(int)n;i++)
    {
        if(i%2==0)
        {
            sumsub=sumsub - 4.0/(2*i-1);
        }
        else
        {
            sumplus=sumplus + 4.0/(2*i-1);
        }
        sumall=sumplus+sumsub;
    }
    return sumall;
}
int main()
{
    float n,pi=3.14159265,a;
    printf("Enter n: ");
    scanf("%f",&n);
    printf("The result in %.0f. step is: %f\n",n,find_pi(n));
    printf("Approximate distance to number π in step %.0f is: %f",n,pi-find_pi(n));
    return 0;
}
