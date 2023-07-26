#include <stdio.h>
int main() {
	
    int x , y , temp;
    int *ptr1, *ptr2;
    
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    
    printf("\nBefore swapping x = %d and y = %d", x, y);

    ptr1 = &x;
    ptr2 = &y;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    printf("\nAfter swapping x = %d and y = %d", x, y);
}
