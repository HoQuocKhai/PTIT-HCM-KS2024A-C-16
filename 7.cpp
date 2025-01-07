#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inputArr(int *size,int *arr);
void arrangeArr(int *arr);

int main(){
	int *arr;
	int n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	arr = (int *) malloc(n * sizeof(int));
	
	inputArr(&n,arr);
	
	arrangeArr(arr);
	
	for(int i = 0; i < n; i++){
		printf("%d ",*(arr + i));
	}
	free(arr);
	return 0;
}

void inputArr(int *size,int *arr){
	for(int i = 0; i < *size; i++){
		printf("arr[%d]= ",i);
		scanf("%d",arr+i);	
	}
};

void arrangeArr(int *arr){
	for (int j = 0; j< sizeof(*arr); j++){
		for (int i = 0; i < sizeof(*arr); i++){
			if(*(arr+i)<*(arr+i+1)){
				int temp = *(arr+i);
				*(arr + i) = *(arr+i+1);
				*(arr+i+1) = temp;
			}
		}
	}
};

