#include<stdio.h>

int main(){
	int i, j, size;
	
	printf("Enter the size of the array.\n");
	scanf("%d", &size);
	
	int arr[size];
	printf("Enter the elements:\n");
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<size; i++){
		for(j=0; j<(size-1-i); j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("Sorted array : \n");
	for(i=0; i<size; i++){
		printf("%d \t", arr[i]);
	}
	return 0;
}
