#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
}; 

void main() {
    struct Time T1, T2;

    T1.hour = 8;
    T1.min = 30;
    T1.sec = 45;
    printf("\nHour: %d", T1.hour);
    printf("\nMinutes: %d", T1.min);
    printf("\nSeconds: %d", T1.sec);
    printf("\nEnter Hour: ");
    scanf("%d", &T2.hour); 
    
    printf("Enter Minutes: ");
    scanf("%d", &T2.min);  
    
    printf("Enter Seconds: ");
    scanf("%d", &T2.sec); 


    printf("\nHour: %d", T2.hour);
    printf("\nMinutes: %d", T2.min);
    printf("\nSeconds: %d", T2.sec);
}
