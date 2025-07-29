#include<stdio.h>
void main(){
	char chh[]="shelkep";
	char bhh[]="shelkeq";
	int a=mystrcam(chh,bhh);
	//printf("%d",a);
		if(a>0){
		printf("chh is greter");
	}
	else if(a<0){
		printf("chh is smaller");
	}
	else{
		printf("equal string");
	}
}
    int mystrcam(char *chh,char *bhh){
	
	int i=0;
	while(chh[i]!='\0'&&bhh[i]!='\0'){
		if((chh[i])==(bhh[i])){
				i++;
			continue;
			
		}
		else if(chh[i]>bhh[i])
		{
			return 1;
		   
		}
		else
		{
			return -1;
			
		}
	 
	 }
	 if(chh[i]=='\0'&&bhh[i]=='\0')
	 {
	 	return 0;
	 }
	 if(chh[i]!='\0')
	   {
	   	return 1;
	   }
	   else {
	   	return -1;
	   }
	 
		
	}
	
	
