#include <stdio.h>

int main(void){
    int num, denom;
    scanf("%d %d", &num, &denom);

    int answer = num/denom;

    if (num % denom != 0) {
        if ((num > 0 && denom > 0) || (num < 0 && denom < 0)) {
            answer++; 
        } else {
            answer--;
        }
    }

    printf("%d\n", answer);
    return 0;
}