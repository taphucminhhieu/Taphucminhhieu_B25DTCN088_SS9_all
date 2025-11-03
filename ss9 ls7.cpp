#include <stdio.h>
int main(){
	const int max = 100;
	int arr[max];
	int n;
	int temp;
	
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<1 || n>max){
			printf("Nhap lai n \n");
		}
	}while(n<1 || n>max);
	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nMang vua nhap: \n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	for(int i=0;i<n/2;i++){
		temp = arr[i];
		arr[i] = arr[n-1-i]; 
		arr[n-1-i] = temp;
	}
	printf("\nMang dao nguoc: \n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
