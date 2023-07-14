#include <stdio.h>


int main(){
	int a = 0, b = 0,c = 0;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	int tmp = 0;
	if (a>b){
		while (a%b != 0){
			b = a%b;
		}
		tmp = b;
		
	}
	else{
		while (b%a!=0){
			a = b%a;
		}
		tmp = a;

	}
	if (c>tmp){
		while(c%tmp != 0){
			tmp = c%tmp;
		}
		printf("%d\n",tmp);
		return 0;
	}
	else {
		while (tmp%c != 0){
			c = tmp%c;
		}
		printf("%d\n",c);
		return 0;
	}
	return 0;
}
