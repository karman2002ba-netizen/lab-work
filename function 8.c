//. Write a function to find the maximum of two numbers.

#include <stdio.h>
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main(){
    max(3, 5);
    printf("%d", max(3, 5));
    return 0;
}