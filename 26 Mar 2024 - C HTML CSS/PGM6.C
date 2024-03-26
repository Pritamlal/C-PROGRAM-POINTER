
/**
 * C program to input and print array elements using pointer in array notation
 */

#include <stdio.h>

#define MAX_SIZE 100 /
int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int * ptr = arr;    

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        
        scanf("%d", &ptr[i]);   
    }

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        
        printf("%d, ", i[ptr]);
    }

    return 0;
}
