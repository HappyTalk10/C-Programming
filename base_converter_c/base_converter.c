// 基数変換プログラム

#include <stdio.h>

int main() {
    int num;
    
    printf("10進数の数値を入力してください: ");
    scanf("%d", &num);
    
    printf("\n10進数: %d\n", num);
    printf("2進数:  ");
    
    // 2進数への変換
    int found = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            found = 1;
        }
        if (found) {
            printf("%d", (num >> i) & 1);
        }
    }
    if (!found) printf("0");
    printf("\n");
    
    printf("8進数:  %o\n", num);
    printf("16進数: %x\n", num);
    printf("16進数: %X\n", num);
    
    return 0;
}


