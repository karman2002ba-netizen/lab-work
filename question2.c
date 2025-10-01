 #include <stdio.h>
 int main() {
    int num, i;
    int multiply;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        multiply = num * i;
        printf("%d\n", multiply);
    }
    return 0;
 }
