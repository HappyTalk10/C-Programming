#include <stdio.h>

int main() {
    int num = 123;
    
    printf("10進数: %d\n", num);
    printf("2進数:  ");
    
    // 2進数への変換（ビット演算を使用）
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (i == 31) {
            // 先頭の0を除外
            int found = 0;
            for (int j = 31; j >= 0; j--) {
                if ((num >> j) & 1) {
                    found = 1;
                    i = j;
                    break;
                }
            }
            if (!found) {
                printf("0");
                break;
            }
        }
        printf("%d", bit);
    }
    printf("\n");
    
    // または標準関数を使用した方法
    printf("2進数:  0b");
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        if ((num >> i) & 1 || i < 7) {  // 最初の1が見つかったら表示開始
            printf("%d", (num >> i) & 1);
            if (i == 0) break;
        } else if (i == 0) {
            printf("0");
        }
    }
    printf("\n");
    
    // 簡単な方法
    printf("8進数:  %o\n", num);
    printf("16進数: %x\n", num);
    printf("16進数: %X\n", num);  // 大文字
    
    return 0;
}