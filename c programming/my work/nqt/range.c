#include<stdio.h>
void main(){
	int start,end,i,j;
	scanf("%d",&start);
	scanf("%d",&end);
	
	for( i=start;i<end;i++){
		int flag=1;
		if(i<=1){
			continue;
		}
		    for( j=2;j<i/2;j++){
		    	if(i%j==0){
		    		flag=0;
		    		break;
				}
			}
			if(flag){
				printf("\n%d",i);
			}
	}
	
}