#include<stdio.h>

/**
int binarySearch(int arr[], int n, int lowerBound, int upperBound, int x){
	//int i;	
	while(lowerBound <= upperBound){	
	//for(i = 0; i <= n; i++){	
		int mid = (lowerBound + upperBound)/2;
		if(x==arr[mid]){
			return mid+1;
		}
		else{
			if(x > arr[mid]){
				lowerBound = mid+1;
				//n = upperBound - lowerBound + 1;
			}
			else{
				upperBound = mid-1;
				//n = upperBound + 1;
			}
		}
		//i = 0;	
	}
	return -1;
}
**/

int binarySearch(int arr[], int lowerBound, int upperBound, int x){	
	
	int mid = (lowerBound + upperBound)/2;
	if(x==arr[mid]){
		return mid+1;
	}
	
	if(x > arr[mid]){
		return binarySearch(arr, mid+1, upperBound, x);
	}
	else{
		return binarySearch(arr, lowerBound, mid-1, x);
	}
	return -1;
}


void main(){
	int size, i, el;
	printf("Enter the size of the array: \n");
	scanf("%d", &size);
	int arr[size];
	
	printf("Enter the elemnents of the array: \n");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the element to be searched: \n");
	scanf("%d", &el);
	
	int res = binarySearch(arr, /**size,**/ 0, size-1, el);
	if(res == -1){
		printf("Element not found.");
	}
	else{
		printf("Element found in position %d", res);
	}
}
