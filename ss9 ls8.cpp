#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    printf("\nCac so nguyen to trong mang la: ");
    
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int number1 = 1; 
        if (num < 2) {
            number1 = 0;
        } else if (num == 2) {
            number1 = 1;
        } else if (num % 2 == 0) {
            number1 = 0;
        } else {
            for (int j = 3; j <= sqrt(num); j += 2) {
                if (num % j == 0) {
                    number1 = 0;
                    break;
                }
            }
        }
        if (number1) {
            printf("%d ", num);
            sum += num;
        }
    }
    
    printf("\nTong cac so nguyen to = %d\n", sum);
    
    return 0;
}
