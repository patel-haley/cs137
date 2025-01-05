#include <stdio.h>
#include "fun.h"

// Function to determine if n is a Sophie Germain prime
int isSophieGermainPrime(int n) {
    if (n <= 0) {
        return 0; // Not a prime candidate
    }
    
    // Check if n is prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // n is not a prime number
        }
    }

    // Check if (2*n + 1) is also a prime number
    int candidate = 2 * n + 1;
    for (int i = 2; i*i < candidate; i++) {
        if (candidate % i == 0) {
            return 0; // (2*n + 1) is not a prime number
        }
    }
    
    return 1; // n is a Sophie Germain prime
}

int base2nat(int bs, int num) {
    int power = 1;   
    int result = 0; 
    if (num <= 0 || bs >= 10 || bs <= 1) {
        return 0; 
    }

    while (num > 0) {
        int digit = num % 10; 
        result += digit * power; 
        num /= 10;    
        power *= bs; 
    }
    
    return result; 
}


int nat2base(int bs, int num) {
    int power = 1;   
    int result = 0; 
    if (num <= 0 || bs >= 10 || bs <= 1) {
        return 0; 
    }

    while (num > 0) {
        int digit = num % bs; 
        result += digit * power; 
        num /= bs;    
        power *= 10; 
    }
    
    return result; 
}
