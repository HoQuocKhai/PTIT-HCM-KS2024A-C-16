#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	char *inputString;
	inputString = (char *) malloc(100*sizeof(char));
	printf("nhap chuoi: ");
	gets(inputString);
	printf("%s \n",inputString);
	
	char *reseverString = strrev(inputString);
	printf("%s \n",reseverString);
	return 0;
}

