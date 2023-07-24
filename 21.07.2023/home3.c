#include <stdio.h>
#include <ctype.h>

int main(){
	char arr[8];
	printf("Enter 8 characters: ");
	fgets(arr, sizeof(arr) , stdin);

	for (int i = 0;i<8;++i){
		if (isdigit(arr[i])){
			printf("%c ",arr[i]);
		}
	}
	printf("\n");
	return 0;
}
