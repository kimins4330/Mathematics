#include <stdio.h>
#include <stdlib.h>


void ModulusOperator(int num);
void GetAliquot(int num);
void CreateList();

typedef struct _Node{
	int value;
	struct Node* next;
}Node;

typedef struct _List{
	int count;
	Node* header;
}List;


struct Test{
	int a;
	int b;
};

int OutStructure(struct Test _test){
	return _test.a+_test.b;	
}

void SetStructure(struct Test _test, int a, int b){
	_test.a = a;
	_test.b = b;
}

int main(){
	struct Test test;
	SetStructure(test, 10,23);
	printf("test.a+test.b = %d \n", OutStructure(test));

	int array[5] = {0,1,2,3,4};
	printf("array[3] = %d \n", array[3]);
	int b = 40;
	int* a = &b;
	printf("b: %d \n", *a);
}

void ModulusOperator(int num){
	int count = 0;
	while(count<20){
		printf("example %d %% %d : %d \n", count,num,  count%num);
		count++;
	}
}
/*
int* CreateList()
{
	
}
*/

void GetAliquot(int num)
{
	
}

void FindPrimeNumber(int range)
{
}

void factorization(int num)
{
	int result = 0;
	
	
}
