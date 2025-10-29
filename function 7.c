#include <stdio.h>
int add(int a) {
    return a*a;
}
int main() {
   add(3);
   printf("%d", add(3));
    return 0;
}