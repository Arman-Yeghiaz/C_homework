#include <stdio.h>

int main(void){
	int n = 0 ;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers ",n);
	for(int i = 0; i<n;i++){
		printf("Enter the %d number: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
