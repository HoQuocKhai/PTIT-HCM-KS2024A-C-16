#include<stdio.h>
#include<stdlib.h>


void inputArr(int *size,int *arr);
void fixArr(int *valuNumber, int *indexNumber, int *arr);


int main(){
	int *arr;
	int n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	arr = (int *) malloc(n * sizeof(int));
	
	inputArr(&n,arr);
	
	int indexNumber,valuNumber;
	printf("nhap vi tri can cap nhat= ");
	scanf("%d",&indexNumber);
	printf("nhap gia tri can cap nhat= ");
	scanf("%d",&valuNumber);
	
	fixArr(&valuNumber,&indexNumber,arr);
	
	for(int i = 0; i < n; i++){
		printf("arr[%d]= %d\n",i,*(arr + i));
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


void fixArr(int *valuNumber, int *indexNumber, int *arr){
	int i = *indexNumber;
	*(arr+(*indexNumber))= *valuNumber;

};
