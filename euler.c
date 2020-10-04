#include "euler.h"

int multiple3_5(int greatest){
	int sum = 0;
	int a;
	for(a = greatest - 1; a > 0; a = a - 1){
		if(a % 3 == 0 || a % 5 == 0){
			sum = sum + a;
		}
	}
	return sum;
}

int sum_of_squares(int greatest){
        int sum = 0;
        int a;
        for(a = greatest; a > 0; a = a - 1){
		sum = sum + (a * a);
        }
        return sum;
}

int square_of_sum(int greatest){
	int sum = 0;
        int a;
        for(a = greatest; a > 0; a = a - 1){
		sum = sum + a;
	}
	return sum * sum;
}
