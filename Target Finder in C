#include <stdio.h>
#include <stdlib.h>

/*
Solution of this problem in C.
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Problem' link: https://leetcode.com/problems/two-sum/
*/

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
