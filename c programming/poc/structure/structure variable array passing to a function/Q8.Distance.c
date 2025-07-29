#include <stdio.h>

typedef struct Distance {
    int feet;
    int inch;
}Dis; 
 void stor(Dis*,int );
  void display(Dis*,int );
void main() {
  int size;
printf("Enter the size = ");
scanf("%d",&size);
Dis str[size];
stor(str,size);
display(str,size);
}
    void stor(Dis*D2,int size)
{
    for(int i=0;i<size;i++){
	

    printf("\nEnter Feet: ");
    scanf("%d", &D2[i].feet); 
    
    printf("Enter Inches: ");
    scanf("%d", &D2[i].inch);  
}
}
    void display(Dis*D2,int size)
	{
		for(int i=0;i<size;i++){
		
		 printf("\nFeet: %d", D2[i].feet);
    printf("\nInches: %d", D2[i].inch);
}
}

