#include <stdio.h>
void ModulusOperator(int num);

int main(){
	ModulusOperator(5);
	int array[5] = {0,1,2,3,4};
	printf("array[3] = %d \n", array[3]);
}
void ModulusOperator(int num){
	int count = 0;
	while(count<20){
		printf("example %d %% %d : %d \n", count,num,  count%num);
		count++;
	}
}

int sum(int a, int b)
{
	return a+b;
}

void FindPrimeNumber(int range)
{
}

void factorization(int number)
{
	int result = 0;
	
	
}
