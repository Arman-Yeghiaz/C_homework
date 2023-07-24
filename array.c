#include <stdio.h>

int main(){
	int n = 0;
	do {
		printf("how many numbers ?: ");
		scanf("%d",&n);
	}while(n<=1);
	int arr[n];
	printf("Enter the numbers: ");
	for (int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	int max = arr[0],min = arr[0],sumOdd = 0 ,min2 = arr[0];
	float sumHalf = 0;
	for (int i = 0; i < n; ++i){
		if (arr[i] > max){
			max  = arr[i];
		}
		if (arr[i] < min){
			min2 = min;
			min = arr[i];
			
		}
		if (arr[i] % 2 != 0){
			sumOdd += arr[i];
		}
		sumHalf += arr[i];

	}
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	printf("sumOdd = %d\n",sumOdd);
	printf("sumHalf = %g\n",sumHalf/2);
	printf("second min = %d\n",min2);

	return 0;
}
