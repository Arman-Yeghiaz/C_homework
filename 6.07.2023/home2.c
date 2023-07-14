#include <stdio.h>

int main(){
	int a=0,b=0;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("max(a,b) = %d\n",(a>b) ? a:b);

	return 0;
}
