#include <stdio.h>

int main() {
    int n;
    int tong = 0;

    printf("Moi ban nhap so: ");
    scanf("%d", &n);

    if (n > 0) {
        for (int i = n; i > 0; i--) { 
            tong += i;
        }
        printf("Tong cac so tu 1 den %d = %d\n", n, tong);
    } else { 
      
        printf("So nhap khong hop le\n");
    }

    return 0;
}

