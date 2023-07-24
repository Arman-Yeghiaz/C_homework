#include <stdio.h>

int main(){
	int n = 4;
	char arr[n];
	printf("Enter %d symbols\n",n);
	fgets(arr,n+1,stdin);
	for (int i = n-1;i>=0;i--){
		printf("%c",arr[i]);
	}
	printf("\n");
	
	return 0;
}
