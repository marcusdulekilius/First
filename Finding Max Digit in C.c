#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxdigit(int num)
{
    int max=num%10;
    while(num>0)
    {
        int temp=num%10;
        if(temp>max)
        {
            max=temp;
            //if this happens
            //it means there's a num greater than all before
        }
        num=num/10;
        //with this, num gets closer to 0
    }
    return max;
}
    int main()
{
    int num;
    home:
    printf("Enter an integer greater than 0: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Ayo broo...\n");
        goto home;
    }
    printf("%d",maxdigit(num));
    return 0;
}
