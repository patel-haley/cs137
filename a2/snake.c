#include <stdio.h>

int main(void) {
    int n;
    int head_pos = 3;  
    int len = 3;  
    int i;

    scanf("%d", &n);

    if (n >= 5) {
       
        for (i = 0; i < n; i++) {
                if (i == head_pos) {
                    printf("H");
                } else if (i >= head_pos - 2 && i < head_pos) {
                    printf("X");
                } else if (i % 2 != 0) {
                    printf(".");
                } else {
                    printf("_");
                }
            }
            printf("\n");
        
        while (head_pos < n - 1) {
            head_pos++;
            if (head_pos % 2 == 1){
                len++;
            }
            for (i = 0; i < n; i++){
                if (i == head_pos) {
                    printf("H");
                } else if (i > head_pos - len && i < head_pos) {
                    printf("X");
                } else if (i > head_pos && i % 2 != 0) {
                    printf(".");
                } else {
                    printf("_");
                }
            }
                printf("\n");
            }
        }
    return 0;    
    } 