#include<stdio.h>
int main ()
{
int N, M=0, C;
	printf("infome um valor");
	scanf ("%d", &N);
	while (M<=9){
		++M;
		C =  N * M;
		printf("\n %d x %d = %d\n", N , M, C );
}
return 0;
}
