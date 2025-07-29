#include<stdio.h>
#include<string.h>
void main(){
	char arr[]="ashutosh";
	char brr[]="shelke";

	int a=strcmp(arr,brr);
	printf("%d",a);
	if(a>0){
		printf("arr is greter");
	}
	else if(a<0){
		printf("arr is smaller");
	}
	else{
		printf("equal string");
	}
}
	/*
	How strcmp Works
  The strcmp function compares two strings lexicographically 
  (like how words are ordered in a dictionary).
  
   It works as follows:
It compares each character of both strings one by one.
If it finds a difference, 
1)  it returns a positive value if the first string is greater than the second string,
2) a negative value if it is smaller, 
3)or zero if both are equal.
Lexicographical Comparison Steps:
Compare 'A' (ASCII value 65) with 'S' (ASCII value 83):
Since 65 < 83, strcmp will return a negative value.
 function compares the two strings character by character, but as soon as it finds a difference,
  it stops. It doesn't continue to compare the rest of the characters. 
  This is why only the first differing character determines the result.
  t compares the first character of arr with the first character of brr.
If the characters are different, it returns based on their ASCII values
If the first characters are equal, it moves on to the next character and continues the process.
*/
