#include<stdio.h>

int sum(int *a, int *b);

int main(){
	int a =100, b = 1;
	int *aPrt = &a , *bPrt = &b;
	printf("%d",sum(&a,&b));
	return 0;
}
int sum(int *a, int *b){
	int sum = *a + *b;
	return sum;
};

