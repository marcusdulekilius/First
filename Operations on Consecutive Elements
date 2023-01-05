#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    //Makin' the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_diff = 0;
    int first = 0;
    int second = 0;
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(arr[i] - arr[i + 1]);
        if (diff > max_diff) {
            max_diff = diff;
            first = arr[i];
            second = arr[i + 1];
        }
    }

    printf("The two consecutive elements with the largest absolute difference are: %d and %d\n", first, second);
    printf("The absolute difference between these elements is: %d\n", max_diff);

    return 0;
}
