#include <stdio.h>
    int main() {
        int menu, menu1, pos,temp;
        int col = 0, row =0;
        int arr[100][100];
        long long result = 1;
        int num[100];
        meun:
        do {
            printf("1.Nhập kích cỡ và giá trị các phần tử của mảng\n");
            printf("2.In giá trị các phần tử của mảng theo ma trận\n");
            printf("3.In ra các phần tử nằm trên đường biên và tính tích\n");
            printf("4.In ra các phần tử nằm trên đường chéo chính\n");
            printf("5.In ra các phần tử nằm trên đường chéo phụ\n");
            printf("6.Sắp xếp đường chéo chính theo thứ tự tăng dần \n");
            printf("7.Tìm kiếm một phần tử và in ra vị trí của phần tử đó trong mảng\n");
            printf("8.Thoát\n");
            printf("Enter your number: ");
            scanf("%d", &menu);
        }while (menu > 9 || menu < 1);

            switch (menu) {
                case 1:
                    printf("Nhap chieu doc cua mang: ");
                    scanf("%d", &col);
                    printf("Nhap chieu nag cua mang: ");
                    scanf("%d", &row);
                    arr[col][row];
                    for(int i = 0; i < col; i++) {
                        for (int j = 0; j < row; j++) {
                            printf("col %d, row %d: ", i + 1, j + 1);
                            scanf("%d", &arr[i][j]);
                        }
                    }
                    goto menu1;
                    break;

                case 2:
                    if(row == 0 && col == 0) {
                        printf("invalid!!");
                        goto menu1;
                    }
                    for(int i = 0; i < col; i++) {
                        for (int j = 0; j < row; j++) {
                            printf("%d  ", arr[i][j]);
                        }
                        printf("\n");
                    }

                    goto menu1;
                    break;
                case 3:
                    if(row == 0 && col == 0) {
                        printf("invalid!!");
                        goto menu1;
                    }
                    for(int i = 0; i < col; i++) {
                        for (int j = 0; j < row; j++){
                            if(i == 0 || j == 0 || i == col - 1 || j == row - 1){
                                printf("%d ", arr[i][j]);
                                result *= arr[i][j];
                            }else{
                                printf("  ");
                            }
                        }
                        printf("\n");
                    }
                    printf("Tich phan tu nam tren duong bien la: %lld ", result);
                    goto menu1;
                    break;
                case 4:
                    if(row == 0 && col == 0 || row != col) {
                        printf("invalid!!");
                        goto menu1;
                    }
                     for(int i = 0; i < col; i++) {
                         for (int j = 0; j < row; j++) {
                             if( i == j) {
                                 printf("%d  ", arr[i][j]);
                             }else {
                                 printf("  ");
                             }
                         }
                         printf("\n");
                     }


                    goto menu1;
                    break;
                case 5:
                    if(row == 0 && col == 0 || row != col) {
                        printf("invalid!!");
                        goto menu1;
                    }
                        for(int i = 0; i < col; i++) {
                            for (int j = 0; j < row; j++) {
                                if(j == row  - i - 1) {
                                    printf("%d  ", arr[i][j]);
                                }else {
                                    printf("  ");
                                }
                            }
                            printf("\n");
                        }


                    goto menu1;
                    break;
                case 6:
                    if(row == 0 && col == 0 || row != col) {
                        printf("invalid!!");
                        goto menu1;
                    }

                pos = 0;
                for(int i = 0; i < col; i++) {
                    for (int j = 0; j < row; j++) {
                        if( i == j) {
                            num[pos] =arr[i][j];
                            pos++;
                        }
                        }
                    }

                for(int i = 1; i < pos; i++) {
                    for (int j = 0; j < i; j++) {
                        if(num[i] < num[j]) {
                            temp = num[i];
                            num[i] = num[j];
                            num[j] = temp;
                        }
                    }
                }

                pos = 0;
                for(int i = 0; i < col; i++) {
                    for (int j = 0; j < row; j++) {
                        if( i == j) {
                          printf("%d", num[pos]);
                            pos++;
                        }else {
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


                    goto menu1;
                    break;
                case 7:
                    if(row == 0 && col == 0) {
                        printf("invalid!!");
                        goto menu1;
                    }
                printf("Nhap phan tu can tim: ");
                scanf("%d", &pos);
                temp = 1;
                for(int i = 0; i < col; i++) {
                    for (int j = 0; j < row; j++) {
                        if(arr[i][j] == pos) {
                            printf("Phan tu %d nam o vi tri: cot:%d hang:%d (stt: %d /%d) \n", pos, i + 1, j +1, i * col + j + 1, row * col);
                        }
                    }
                }
                    if(!temp) {
                        printf("\n");
                        printf("Khong co phan tu %d trong mang !", pos);
                    }

                    goto menu1;
                    break;
                case 8:

                    return 0;
                menu1:
                printf("\n");
                do {
                    printf("1.Back to menu\n");
                    printf("1.Exit\n");
                    scanf("%d", &menu1);
                }while(menu1 != 1 && menu1 != 2);

                if(menu1 == 1) {
                    goto meun;
                }else {
                    return 0;
                }
                    break;
            }

    }
