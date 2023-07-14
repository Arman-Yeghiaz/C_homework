#include <stdio.h>
#include <ctype.h>

int main(){
	char a;
	do{
		printf("Enter a letter\n");
		scanf(" %c",&a);
	}while (!(a>=65 && a<=90 || a>=97 && a<=122));

	switch (tolower(a)){
		case 'a':
		case 'e':
		case 'o':
		case 'u':
		case 'i':
			puts("Vowel");
			break;
		default:
			puts("Consonants");
	}
	return 0;
}
