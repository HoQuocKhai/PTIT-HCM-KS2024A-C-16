#include<stdio.h>
#include<stdlib.h>

void printArr(int *arrPrt);//ham in mang

int main(){
	int arr[5]={1,2,3,4,5};//khai bao mang va gan gia tri
	int *arrPrt = arr;//khai bao con tro 
	arrPrt = (int *) malloc(5*sizeof(int));//khai bao bo nho dem moi
	
	printArr(arr);//in mang
	free(arr);//giai phong bo nho
	
	return 0;
}
void printArr(int *arrPrt){
	for (int i = 0; i < 5; i++){
		printf("%d ", *(arrPrt + i));
	}
};
