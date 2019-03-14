#include<stdio.h>
#include<string.h>
void main(){
	char arr[20];
	
	printf("enter a name");
	scanf("%[^\n]s",arr);
	
	printf("%s", arr);
	int len = strlen(arr);
	printf("\n%d", len);
}
