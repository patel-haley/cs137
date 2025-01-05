#include <stdio.h>

void numberPairs(int n) {
    if (n<=0){
        return;
    } else{
        int remainder = n%10;
        int quotient = n/10;
            numberPairs(quotient);
            if (remainder != (quotient %10)){
                printf("%d%d", remainder, remainder);
            }
        }
}