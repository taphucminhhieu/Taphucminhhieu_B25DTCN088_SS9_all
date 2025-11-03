#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    int arr[n];
    int i;
    
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    return 0;
}
