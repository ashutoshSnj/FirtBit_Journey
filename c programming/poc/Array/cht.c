#include<stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {6, 7, 8, 9, 10};
    int srr[10];  // Combined array

    int i, j;

    // Copy arr[] into srr[]
    for(i = 0; i < 5; i++) {
        srr[i] = arr[i];
    }

    // Copy brr[] into srr[] starting after the last element of arr[]
    for(j = 0; j < 5; j++) {
        srr[i++] = brr[j];
    }

    // Print merged array srr[]
    printf("Merged array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", srr[i]);
    }

    return 0;
}
