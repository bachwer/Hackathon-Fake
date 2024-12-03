#include <stdio.h>
int main() {
    int menu;
    int menu1;
    int arr[100];
    int pos, n;
    int temp = 0;
    int left, right, mid;
    menu:
    do {
        printf("1.Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("2.In ra giá trị các phần tử đang quản lý\n");
        printf("3.In ra giá trị lớn nhất của mảng\n");
        printf("4.In ra các phần tử là số nguyên tố trong mảng \n");
        printf("5.Thêm một phần tử vào trong mảng\n");
        printf("6.Xóa một phần tử trong mảng\n");
        printf("7.Sắp xếp mảng theo thứ tự tăng dần \n");
        printf("8.Tìm kiếm phần tử(người dùng nhập) và in ra vị trí index của phần tử đó\n");
        printf("9.Thoát\n");
        printf("Enter your number: ");
        scanf("%d", &menu);
    }while (menu > 9 || menu < 1);

    switch (menu) {
        case 1:
            printf("Nhap so phan tu muon nhap: ");
            scanf("%d", &n);
            arr[n];
            for(int i = 0; i < n ; i++) {
                printf("Nhap phan tu %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            goto menu1;
            break;

        case 2:
            if(n == 0){
                printf("invalid!!!");
                goto menu1;
            }
            printf("Phan co trong mang la: \n");
            for(int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            goto menu1;
            break;

        case 3:
          if(n == 0){
                printf("invalid!!!");
                goto menu1;
            }
            printf("Gia tri lon nhat cua mang la: ");
            for(int i = 0; i < n; i++) {
                if(temp < arr[i]){
                    temp = arr[i];
                }
            }
            printf("%d", temp);
            goto menu1;
            break;

        case 4:
          if(n == 0){
                printf("invalid!!!");
                goto menu1;
            }
            for (int i = 0; i < n; i++) {
                for(int j = 1 ; j <= arr[i]; j++ ) {
                    if(arr[i] % j == 0) {
                        temp++;
                    }
                }
                if(temp == 2) {
                    printf("%d ", arr[i]);
                }
                temp = 0;
            }
            goto menu1;
            break;

        case 5:
          if(n == 0){
                printf("invalid!!!");
                goto menu1;
            }
            printf("Nhap vi tri can them: ");
            scanf("%d", &pos);
            pos--;
            for(int i = n ; i > 0; i--) {
                arr[i + 1] = arr[i];
                if(i == pos) {
                    printf("nhap gia tri can them: ");
                    scanf("%d", &arr[i]);
                    break;
                }
            }
        printf("\n");
        for(int i = 0; i < n + 1; i++) {
            printf("%d ", arr[i]);
        }
            goto menu1;
            break;

        case 6:
          if(n == 0){
                printf("invalid!!!");
                goto menu1;
            }
            printf("Nhap vi tri can xoa; ");
            scanf("%d", &pos);
            pos--;
            for (int i = pos ; i < n; i++) {
                arr[i] = arr[i + 1];
            }
        n--;
        for(int i = 0; i < n  ; i++) {
            printf("%d ", arr[i]);
        }
            goto menu1;
            break;

        case 7:
          if(n == 0){
                printf("invalid!!!");
                goto menu1;
            }
            for (int i = 1; i < n; i++) {
                for(int j = 0; j < i; j++) {
                    if(arr[i] < arr[j]) {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        for(int i = 0; i < n  ; i++) {
            printf("%d ", arr[i]);
        }
            goto menu1;
            break;

        case 8:
            if(n == 0){
                printf("invalid!!!");
                goto menu1;
            }
            left = 0;
            right = n - 1;
        printf("Nhap phan tu can tim: ");
        scanf("%d", &pos);
        while (left <= right) {
            mid = left + ( right - left) / 2;
            if(arr[mid] == pos) {
                printf("Tim thay tai vi tri %d", mid + 1 );
                goto menu1;
            }
            if(arr[mid] > pos) {
                right = mid - 1;
            }else {
                left = mid + 1;
            }
        }
            printf("Khong co phan tu do: ");
            goto menu1;
            break;

        case 9:
            printf("Da thoat");
            return 0;
            menu1:
        printf("\n");
        do {
            printf("1.Back to menu\n");
            printf("2.Exit\n");
            scanf("%d", &menu1);
        }while (menu1 != 1 && menu1 != 2);
        if(menu1 == 1) {
            goto menu;
        }else {
            return 0;
        }
            break;
    }
}
