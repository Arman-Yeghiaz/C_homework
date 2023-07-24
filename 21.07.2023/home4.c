#include <stdio.h>

int main(){
	int n = 0;
	do {
		printf("Enter a number : ");
		scanf("%d",&n);
	}while (n<=1);

	for (int i = 0; i<n;i++){
		for (int j = 0;j<n;j++){
			if (j == 0 || j == n-1 || i == 0 || i == n-1){
				printf("* ");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}
