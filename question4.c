 #include <stdio.h>
 int main() {
    int i;
    double population = 100000;
    for (i = 1; i <= 10; i++) {
        population = population + (population * 0.1);
        printf("Year %d: Population = %0.f\n", i, population);
    }
    return 0;
 }