#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Circle
{
    float x;
    float y;
    float r;
};
void isitsoddy (struct Circle c1,struct Circle c2,struct Circle c3)
{
    float rdiff= pow((c1.r+c2.r),2);
    float planediff= pow((c1.x-c2.x),2)+pow((c1.y-c2.y),2);

    float sec_rdiff= pow((c1.r+c3.r),2);
    float sec_planediff= pow((c1.x-c3.x),2)+pow((c1.y-c3.y),2);

    float third_rdiff= pow((c2.r+c3.r),2);
    float third_planediff= pow((c2.x-c3.x),2)+pow((c2.y-c3.y),2);

    if(rdiff==planediff && sec_rdiff==sec_planediff && third_rdiff==third_planediff)
        printf("The circles are Soddy circles.");
    else
        printf("The circles aren't Soddy circles.");
}

int main()
{
    struct Circle c1;
    struct Circle c2;
    struct Circle c3;
    printf("Please enter the information for the first circle in the format (x, y, r): ");
    scanf("%f %f %f",&c1.x,&c1.y,&c1.r);
    printf("Please enter the information for the second circle in the format (x, y, r): ");
    scanf("%f %f %f",&c2.x,&c2.y,&c2.r);
    printf("Please enter the information for the second circle in the format (x, y, r): ");
    scanf("%f %f %f",&c3.x,&c3.y,&c3.r);
    isitsoddy(c1,c2,c3);
    return 0;
}
