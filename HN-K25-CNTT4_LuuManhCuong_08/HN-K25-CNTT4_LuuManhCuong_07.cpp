#include <stdio.h>

int main() {
    int arr[100];
    int choice;
    int currenIndex = 0;
    int i, j, num, sum, tong;

    do {
        printf("\n ------------menu-----------");
        printf("\n 1. nhap gia tri trong mang");
        printf("\n 2. hien thi cac gia tri trong mang");
        printf("\n 3. tong cac so nguyen to trong mang");
        printf("\n 4. hien thi cac so le");
        printf("\n 5. them phan tu vao cuoi mang");
        printf("\n 6. xoa phan tu theo vi tri");
        printf("\n 7. sap xep giam dan");
        printf("\n 8. kiem tra su ton tai (Linear Search)");
        printf("\n 9. in cac phan tu xuat hien 1 lan");
        printf("\n 10. cap nhat cac so am thanh 0");
        printf("\n Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &currenIndex);
                for (i = 0; i < currenIndex; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Mang hien tai: ");
                for (i = 0; i < currenIndex; i++) {
                    printf("%d ", arr[i]);
                }
                break;
            case 3:
                tong = 0;
                for (i = 0; i < currenIndex; i++) {
                    int dem = 0;
                    if (arr[i] > 1) {
                        for (j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                dem = 1;
                                break;
                            }
                        }
                        if (dem == 0) tong += arr[i];
                    }
                }
                printf("Tong cac so nguyen to: %d", tong);
                break;
            case 4:
                printf("Cac so le: ");
                for (i = 0; i < currenIndex; i++) {
                    if (arr[i] % 2 != 0) printf("%d ", arr[i]);
                }
                break;
            case 5:
                printf("Nhap phan tu can them: ");
                scanf("%d", &num);
                arr[currenIndex] = num;
                currenIndex++;
                break;
            case 6:
                printf("Nhap vi tri muon xoa (0 - %d): ", currenIndex - 1);
                scanf("%d", &num);
                if (num >= 0 && num < currenIndex) {
                    for (i = num; i < currenIndex - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    currenIndex--;
                }
                break;
            case 7:
                for (i = 0; i < currenIndex - 1; i++) {
                    for (j = i + 1; j < currenIndex; j++) {
                        if (arr[i] < arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang da duoc sap xep giam dan.");
                break;
            case 8:
            
                break;

            case 9:
            	break;
            case 10:
                for (i = 0; i < currenIndex; i++) {
                    if (arr[i] < 0) arr[i] = 0;
                }
                printf("Da cap nhat cac so am thanh 0.");
                break;
        }

    } while (1);

    return 0;
}
