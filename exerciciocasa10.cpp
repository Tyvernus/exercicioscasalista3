#include<stdio.h>
int main(){
	char  R;
	int a, b;
		printf("escolha  uma operacao '/,+,-,*' ou S: ");
	scanf (" %c", &R);
	while(R!='S'){
		printf("escolha  uma operacao '/,+,-,*' ou S: ");
	scanf (" %c", &R);
		printf(" insira valor a: ");
	scanf("%i", &a);
		printf(" insira valor b: ");
	scanf("%i", &b);
		switch (R){
			case '+':
				printf("%i\n", a + b);
			break;
			case '-':
				printf("%i\n", a - b);
			break;
			case '/':
				printf("%i\n", a / b);
			break;
			case '*':
				printf("%i\n", a * b);
			break;
			case 'S':
				printf("encerrando \n");
			break;
			default:
				printf("bye");
				break;
		}
	}
	
	return 0;
}
