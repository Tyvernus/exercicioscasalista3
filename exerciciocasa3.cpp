#include<stdio.h>
int main (){
	int N=1;
	while (N<=20){
			if (N%2 ==0)
				{
				printf("� par: %i\n", N);
				}else{
					printf("� impar: %i\n", N);
				}
					N=N+1;
			}
		
		return 0;
}
