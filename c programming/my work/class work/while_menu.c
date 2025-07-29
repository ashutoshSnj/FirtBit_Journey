#include<stdio.h>
void findMinMax(int *arr, int size);
void searchElement(int *arr, int size, int search);
void calculateSum(int *arr, int size);
void displayEvenOdd(int *arr, int size);
void displayAlternate(int *arr, int size);
void displayPrimes(int *arr, int size);
void reverseArray(int *arr, int size);
void sortArray(int *arr, int size);
void main() {
    int size, choice, search;

    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while (1){
        printf("\nMenu:\n");
        printf("1. Find Min and Max\n");
        printf("2. Search an Element\n");
        printf("3. Calculate Sum\n");
        printf("4. Display Even and Odd numbers\n");
        printf("5. Display Alternate numbers\n");
        printf("6. Display Prime numbers\n");
        printf("7. Reverse the array\n");
        printf("8. Sort the array\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            findMinMax(arr, size);
        } 
        else if(choice == 2) {
            printf("Enter element to search: ");
            scanf("%d", &search);
            searchElement(arr, size, search);
        } 
        else if(choice == 3) {
            calculateSum(arr, size);
        } 
        else if(choice == 4) {
            displayEvenOdd(arr, size);
        } 
        else if(choice == 5) {
            displayAlternate(arr, size);
        } 
        else if(choice == 6) {
            displayPrimes(arr, size);
        } 
        else if(choice == 7) {
            reverseArray(arr, size);
        } 
        else if(choice == 8) {
            sortArray(arr, size);
        } 
        else if(choice == 9) {
            break;
        } 
        else {
            printf("Invalid choice.\n");
        }
    }
    

}
void findMinMax(int *arr, int size) {
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum number is %d and maximum number is %d\n", min, max);
}

void searchElement(int *arr, int size, int search) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == search) {
            printf("Element found at index: %d, position: %d\n", i, i + 1);
            return;
        }
    }
    printf("Element not found.\n");
}

void calculateSum(int *arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
}

void displayEvenOdd(int *arr, int size) {
    printf("Even numbers:\n");
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\nOdd numbers:\n");
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void displayAlternate(int *arr, int size) {
    printf("Alternate numbers:\n");
    for(int i = 0; i < size; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void displayPrimes(int *arr, int size) {
    printf("Prime numbers:\n");
    for(int i = 0; i < size; i++) {
        int flag = 0;
        if(arr[i] < 2) {
            continue;
        }
        for(int j = 2; j <= arr[i] / 2; j++) {
            if(arr[i] % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void reverseArray(int *arr, int size) {
    for(int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    printf("Reversed array:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


