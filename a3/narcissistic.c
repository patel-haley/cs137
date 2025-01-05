#include <stdio.h>
#include <stdbool.h>

int count_digits(int n) {
    int count = 0;
    if (n == 0) {
        return 0;
    }
    if (n!=0){
        int count = 1 + count_digits(n/10);
        return count;
    }

}

int power(int remainder, int count) {
    if (count == 0) {
        return 1;
    }
    else {
        int digit = remainder * power(remainder, count -1);
        return digit;
    }
}

int sum_digits(int n, int digit_count) {
    if (n <= 0) {
        return 0;
    } else{
        int remainder = n %10;
        int sum = power(remainder, digit_count) + sum_digits(n / 10, digit_count);
        return sum;
    }

}

bool narcissist(int n) {
    int digit_count = count_digits(n);
    return n == sum_digits(n, digit_count);
}


