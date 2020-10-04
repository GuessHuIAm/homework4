#include <stdio.h>
#include "euler.h"

int main(){
        // 1st problem
        printf("Sum of multiples of 3 or 5 under 1000: %d\n", multiple3_5(1000));

        // 6th problem
        printf("Difference between the sum of the squares of the first one hundred natural numbers and the square of the sum: %d\n", square_of_sum(100) - sum_of_squares(100));
        return 0;
}
