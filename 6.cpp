#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inputArr(int *size,int *arr);
int findValu(int *valuNumber, int *arr);

int main(){
	int *arr;
	int n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	arr = (int *) malloc(n * sizeof(int));
	
	inputArr(&n,arr);
	
	int valuNumber;
	printf("nhap vao gia tri can tim= ");
	scanf("%d",&valuNumber);
	printf("%d",findValu(&valuNumber,arr));
	
	free(arr);
	return 0;
}

void inputArr(int *size,int *arr){
	for(int i = 0; i < *size; i++){
		printf("arr[%d]= ",i);
		scanf("%d",arr+i);	
	}
};

int findValu(int *valuNumber, int *arr){
	for(int i = 0; i <= sizeof(*arr); i++){
		if(*(arr+i)==*valuNumber){
			return i;
		}
	}
};
