#include<stdio.h>

int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

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
		for(j=i+1; j>0; j--){
			if(arr[j]<arr[j-1]){
				swap(&arr[j], &arr[j-1]);
			}
		}
	}
	
	printf("Sorted array : \n");
	for(i=0; i<size; i++){
		printf("%d \t", arr[i]);
	}
	return 0;
}
