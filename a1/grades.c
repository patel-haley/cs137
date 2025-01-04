#include <stdio.h>

int main(void){
    int Q, A, M, F;
    scanf("%u %u %u", &Q, &A, &M);

    int current_mark = 5*Q + 20*A + 30*M;

    int F_50 = (5000 - current_mark)/45;
    int F_375 = (3750 - 30*M)/45;

    if (F_50 > F_375) {
        F = F_50;
    } else {
        F = F_375;
    }
    
    printf("%u\n", F);
    return 0;

}