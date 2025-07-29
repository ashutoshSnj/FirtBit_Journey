#include <stdio.h>
#include <stdlib.h>

int* prime(int* arr, int size, int* prime_count);

void main() {
    int size;
    printf("Enter the size of array\n");
    scanf("%d", &size);

    
    int arr[size];
    printf("Enter the numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int prime_count = 0;

    int* primes = prime(arr, size, &prime_count);

    printf("\nPrime numbers in the array:\n");
    for (int i = 0; i < prime_count; i++) {
        printf("%d ", primes[i]);
    }

    
    free(primes);
}

int* prime(int* arr, int size, int* prime_count) {
    
    int* primes = (int*)malloc(size * sizeof(int));
    if (primes == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); 
}
    for (int i = 0; i < size; i++) {
        int flag = 0;

        if (arr[i] < 2) {  
            continue;
        }
        for (int j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                flag = 1;  
                break;
            }
        }

        
        if (flag == 0) {
            primes[*prime_count] = arr[i];
            (*prime_count)++;  
        }
    }

    return primes;
}
