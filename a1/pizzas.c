#include <stdio.h>

int main(void){
    int num_people, slices_per_pizza, slices_each;

    scanf("%u %u %u", &num_people, &slices_per_pizza, &slices_each);

    int answer = (num_people * slices_each) / slices_per_pizza;

    if ((num_people * slices_each) % slices_per_pizza != 0) {
        answer++;
    } 

    printf("%u\n", answer);
    return 0;
}