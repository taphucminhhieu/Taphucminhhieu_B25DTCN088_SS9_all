#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int i;
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    int x;
    int found = 0;
    printf("Nhap mot gia tri can tim: ");
    scanf("%d", &x);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("Tim thay %d tai vi tri %d \n", x, i);
            found = 1;
        }
    }
    
    if(!found) {
        printf("Khong tim thay %d trong mang\n", x);
    }
    
    return 0;
}
