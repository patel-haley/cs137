#include <stdio.h>

void first_line(int n){
    int i = 0;

    first_line(n);
    if (i = (2*n+1)){
        if (i = 0) {
            printf(".");
            i++;
        } else if (i = n){
            printf("*");
            i++;
        } else if (i = 2*n +1){
            printf(".\n");
            i = 0;
        }
    }
}

void top(int n){
    int i = 0;
    int x = n;
    int y = n;

    top(n);
    if (i <= (2*n+1)){
        if (i = 0) {
            printf(".");
            i++;
        }else if (i = (x-1)){
            printf("+");
            i++;
            x--;
        }else if (i = (y+1)){
            printf("+");
            i++;
            y++;
        }else if (i = 2*n +1){
            printf(".\n");
            i = 0;
            return;
        }
    }
    
}

void n_line(int n){
    int i = 0;
    
    n_line(n);
    if (i <= (2*n+1)){
        if (i = 0) {
            printf("*");
            i++;
        } else if (i != 0){
            printf("+");
            i++;
        } else if (i = 2*n +1){
            printf("*\n");
            i = 0;
            return;
        }
    }
}

void trunk(int n){
    int i = 0;
    int x = n;
    int y = n;
    
    trunk(n);
    if (i <= (2*n+1)){
        if (i = 0) {
            printf(".");
            i++;
        }else if (i = (x-1)){
            printf("|");
            i++;
        }else if (i = (y+1)){
            printf("|");
            i++;
        } else if (i = 2*n +1){
            printf(".\n");
            i = 0;
            return;
        }
    }
}

void tree(int n){
    if (n == 0) {
        return;
    }

    top(n-1);
    trunk(n+1);
    tree(n-1);
}