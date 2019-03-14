#include<stdio.h>

void main(){
	int pol1[10], pol2[10], res[10], i, h;
	
	printf("Enter the highest degree of the polynomial functions: \n");
	scanf("%d", &h);
	
	printf("For first polynomial function ->");
	printf("\nEnter the coefficient:");
	for(i=h; i>=0; i--){
		printf("\nfor degree %d\n", i);
		scanf("%d", &pol1[i]);
	}
	
	printf("For second polynomial function ->");
	printf("\nEnter the coefficient:");
	for(i=h; i>=0; i--){
		printf("\nfor degree %d\n", i); 
		scanf("%d", &pol2[i]);
	}
	
	printf("Sum of two polynomial function : ");
	
	
	for(i=h; i>=0; i--){
		res[i] = pol1[i] + pol2[i];
	}
	
	for(i=h; i>=0; i--){
		if(i!=0){
			printf(" %dx^%d +", res[i], i);
		}
		else{
			printf(" %d", res[i]);
		}
	
	}
}
