#include<stdio.h>

void main(){
	int num, i, count=0;
	
	printf("Enter a number:\n");
	scanf("%d", &num);
	
	if(num>1){
		for(i=2; i<num; i++){
			if((num%i) == 0){
				count = 1;
			}
		}
		if(count==0){
			printf("The number is prime");
		}
		else{
			printf("The number is composite");
		}
	}
	else{
		printf("Neither prime nor composite");
	}
	
}
