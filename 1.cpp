#include<stdio.h>

int main(){
	int *aPrt;
	int a=10;
	aPrt = &a;
	printf("%d\n",aPrt);
	printf("%d\n",*aPrt);
	printf("%d\n",*(&aPrt));
	printf("%d\n",a);
}
