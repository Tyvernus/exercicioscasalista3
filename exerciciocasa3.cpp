#include<stdio.h>
int main (){
	int N=1;
	while (N<=20){
			if (N%2 ==0)
				{
				printf("É par: %i\n", N);
				}else{
					printf("É impar: %i\n", N);
				}
					N=N+1;
			}
		
		return 0;
}
