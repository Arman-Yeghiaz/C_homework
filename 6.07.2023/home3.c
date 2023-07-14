#include <stdio.h>

int main(){
	int a = 0, b = 0, c = 0;
	int flag = 0;
	do {
		printf("Enter the first number :");
		scanf("%d",&a);
		printf("Enter the second number :");
		scanf("%d",&b);
		printf("Enter the third number: ");
		scanf("%d",&c);
		if (a == b || a == c || c == b){
			flag += 1;
		}
		if (a == b && a == c){
			flag -= 1;
		}
	}while (flag == 0);
	
	if (a>b){
		if (a>c){
			printf("max(a,b,c) == %d\n",a);
		}
		else{
			printf("max(a,b,c) == %d\n",c);
		}
	}
	else {
		if (b>c){
			printf("max(a,b,c) == %d\n",b);
		}
		else{
			printf("max(a,b,c) == %d\n",c);
		}
	}


	return 0;
}
