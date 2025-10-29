//Write a function to find the sum of digits of a number. 

#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; 
        num /= 10;       
    }
    return sum;
}
int main() {
    sumOfDigits(1234);
    printf("%d", sumOfDigits(1234));
    return 0;
}