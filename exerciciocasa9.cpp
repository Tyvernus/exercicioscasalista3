#include<stdio.h>
int main (){
	int N=0;
	do{
		N=N+1;
		if(N%2 == 0){
			printf("%i par\n", N);
		}else{
			printf("%i impar\n", N);
		}
	}
	while (N <=19);
	return 0;
}
