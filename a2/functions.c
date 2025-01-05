#include "functions.h"
#include <stdio.h>

void square(int w) {
    int i;
    for (i=1; i<=w*w; i++) {
        printf("%d ", i);
        if (i % w == 0) {
            printf("\n");
        }
    }
}

void spiral(int w) {
    int num = 1;            // The current number to print
    int up = 0, left = 0;  // Define the boundaries
    int down = w, right = w;
    int i;

    while (left < right && up < down) {
        for (i = left; i < right; i++){
            printf("%d ", up * w + i + 1); // + 1 cuz we're indicing from 0
        }
        up++;

        for (i = up; i < down; i ++){
            printf("%d ",i*w +right );
        }
        right--;

        for (i=right -1; i >= left; i--){
            printf("%d ", (down-1)*w +(i+1));
        }
        down--;

        for (i = down -1; i >= up; i--){
            printf("%d ", i*w + (left +1));
        }
        left++;

    }
    printf("\n");
}

void rotation(int w) {
    int top_left = 1;
    int top_right = w;
    int bottom_right = (w * w);
    int bottom_left = (w * w) - (w - 1);
    int layer = w-1;

    if (w == 1) {
        printf("1 ");
    }
    
    while (layer >= 1) {
        for (int i = 0; i<layer; i++) {
            printf("%d ", (top_left+(i*1)));
            printf("%d ", top_right + (w*i));
            printf("%d ", (bottom_right-(i*1)));
            printf("%d ", bottom_left - (w*i));
        }
        top_left += (w+1);
        top_right += (w-1);
        bottom_right -= (w+1);
        bottom_left -= (w-1);

        if (top_left == top_right) {
            printf("%d ", top_left);
            break;
        }
        layer -= 2;
    }
    printf("\n");
}