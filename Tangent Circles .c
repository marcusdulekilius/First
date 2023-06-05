#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Circle
{
    float x;
    float y;
    float r;
};
void isittangent (struct Circle c1,struct Circle c2)
{
    float rdiff= pow((c1.r+c2.r),2);
    float planediff= pow((c1.x-c2.x),2)+pow((c1.y-c2.y),2);
    if(rdiff==planediff)
        printf("The circles are tangent to each other.");
    else
        printf("The circles aren't tangent to each other.");
}

int main()
{
    struct Circle c1;
    struct Circle c2;
    printf("Please enter the information for the first circle in the format (x, y, r): ");
    scanf("%f %f %f",&c1.x,&c1.y,&c1.r);
    printf("Please enter the information for the second circle in the format (x, y, r): ");
    scanf("%f %f %f",&c2.x,&c2.y,&c2.r);
    isittangent(c1,c2);
    return 0;
}
