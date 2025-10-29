#include<stdio.h>

int evenOdd(int num) {
    if(num % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
int main(){
    evenOdd(4);
    printf("%d", evenOdd(4));
    return 0;
}