#include<stdio.h>

void main()
{
    int arr[5] = { 2,4,1,3,7 };
    int i = 0;

    printf("Array elements: \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\nSquare of array elements: \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i] * arr[i]);

    printf("\n");


}
