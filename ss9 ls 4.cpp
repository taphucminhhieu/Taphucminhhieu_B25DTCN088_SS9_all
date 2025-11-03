#include <stdio.h>
#include <math.h>
int main () {
	int n;
	printf("nhap so gia tri so nguyen: ");
	scanf("%d",&n);
	
	int arr[n];
	float sum=0;
	float trung_binh_cong;
	printf("nhap so can dc chia: ");
	
	
	for(int i=0;i<n;i++){
		printf("nhap phan tu arr[%d]= ",i);
		scanf("%d",&arr[i]);
		sum += arr[i];
		}
		trung_binh_cong= sum/n;
	printf("\nMang vua nhap: .");
	for(int i=0; i<n;i++){
		printf("%d",arr[i]);
	}

	printf("tong cac phan tu:%.2f\n",sum);
	printf("trung binh cong cua mang: %.2f\n",trung_binh_cong);
	return 0;
}
