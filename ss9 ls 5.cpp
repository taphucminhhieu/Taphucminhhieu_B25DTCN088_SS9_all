#include<stdio.h>
int main () {
	int n;
	printf("nhap phan tu nguyen: ");
	scanf("%d",&n);
	
	int arr[n];
	int dem_chan=0;
	int dem_le=0;
	for(int i=0;i<n;i++){
	printf("nhap so trong mang: ",i+1);
	scanf("%d",&arr[i]);
    }
    
    	printf("\n cac so chan trong mang la:");
    for(int i = 0; i<n ;i++) {
    	if (arr[i] %2 == 0){
    		printf("%d ", arr[i]);
    		dem_chan++;
		}
	}
	    printf("\n cac so le trong mang la: ");	
	for(int i=0;i<n;i++) {
		if(arr[i] %2 != 0) {
			printf("%d ",arr[i]);
			dem_le++;
		}
	}
	printf("\n");
    		printf("tong so chan=%d \n",dem_chan);
			printf("tong so le=%d \n",dem_le);
	return 0;
}
