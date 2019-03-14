#include<stdio.h>

void main(){
	int pol[10], i, h;
	
	printf("Enter the highest degree of the polynomial function: \n");
	scanf("%d", &h);
	
	printf("Enter the coefficient:");
	for(i=h; i>=0; i--){
		printf("\nfor degree %d\n", i);
		scanf("%d", &pol[i]);
	}
	
	printf("Polynomial function : ");
	
	for(i=h; i>=0; i--){
		if(i!=0 ){
			printf("%dx^%d+", pol[i], i);
		}
		else{
			printf("%d", pol[i]);
		}
	
	}
}
