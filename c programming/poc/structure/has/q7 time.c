#include <stdio.h>

typedef struct Time {
    int hour;
    int min;
    int sec;
}Time; 
void display(Time*,int );
void stor(Time*,int );
void main() {
int size;
printf("Enter the size = ");
scanf("%d",&size);
Time str[size];
stor(str,size);
display(str,size);
}
   void stor(Time*T2,int size)
  {
  	
  for(int i=0;i<size;i++){
  
    printf("\nEnter Hour: ");
    scanf("%d", &T2[i].hour); 
    
    printf("Enter Minutes: ");
    scanf("%d", &T2[i].min);  
    
    printf("Enter Seconds: ");
    scanf("%d", &T2[i].sec); 
}
}
  void display(Time*T2,int size){
  	
  
for(int i=0;i<size;i++){

    printf("\nHour: %d", T2[i].hour);
    printf("\nMinutes: %d", T2[i].min);
    printf("\nSeconds: %d", T2[i].sec);
}
}
