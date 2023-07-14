#include <stdio.h>

int main(){
	int year = 0;
	printf("Enter a year :");
	scanf("%d",&year);
	if ((year % 4 == 0 && year % 100 != 0) || (year%400 == 0)){
		printf("Leap year\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}
