#include <stdio.h>
#include <string.h>

typedef struct Music {
    int id;
    char tital[20];
    char artist[20];
    float duration;
} Music;

void hardstor(Music*arr,int size);
void stor(Music*arr, int size);
void display(Music*arr, int size);

int main() {
    Music arr[10];
    hardstor(arr, 3);
    int totalmusic = 3; 
    int choice;
    
    do {
        printf("1. Enter new music\n");
        printf("2. Display music library\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter the count of new music = ");
                int size;
                scanf("%d", &size);
                stor(arr, size);
                totalmusic += size; 
                break;
            }
            case 2: {
                display(arr, totalmusic); 
                break;
            }
            case 3:
                printf("Exit\n");
                break;
        }
    } while (choice != 3);
}

void hardstor(Music* arr, int size) {
    arr[0].id = 1;
    strcpy(arr[0].tital, "tum hi ho");
    strcpy(arr[0].artist, "Arijit Singh");
    arr[0].duration = 3.52;

    arr[1].id = 2;
    strcpy(arr[1].tital,"ranjna");
    strcpy(arr[1].artist, "Arijit Singh");
    arr[1].duration = 4.50;

    arr[2].id = 3;
    strcpy(arr[2].tital, "channa mereya");
    strcpy(arr[2].artist, "Pritam");
    arr[2].duration = 3.45;
}

void stor(Music* arr, int size) {
    for (int i = 0; i < size; i++) {
        int x = 3 + i; 
        printf("Enter the id = ");
        scanf("%d", &arr[x].id);
        getchar(); 
        printf("Enter the title = ");
        fgets(arr[x].tital, 20, stdin);
        int a = strlen(arr[x].tital);
        if (arr[x].tital[a - 1] == '\n') {
            arr[x].tital[a - 1] = '\0';
        }
        printf("Enter the artist name = ");
        fgets(arr[x].artist, 20, stdin);
        a = strlen(arr[x].artist);
        if (arr[x].artist[a - 1] == '\n') {
            arr[x].artist[a - 1] = '\0';
        }
        printf("Enter the duration = ");
        scanf("%f", &arr[x].duration);
    }
}

void display(Music* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("\n ID: %d", arr[i].id);
        printf("\nTitle: %s", arr[i].tital);
        printf("\nArtist: %s", arr[i].artist);
        printf("\nDuration: %0.2f\n", arr[i].duration);
    }
}
