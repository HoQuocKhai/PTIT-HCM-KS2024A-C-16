#include<stdio.h>

void swapValu(int *a,int *b);

int main(){
	int a = 100, b = 2;
	int *aPrt = &a, *bPrt = &b;
	printf("truoc khi doi: a = %d, b = %d\n",a,b);
	swapValu(&a,&b);
	printf("sau khi doi: a = %d, b = %d",a,b);
	
	return 0;
}

void swapValu(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
