#include <stdio.h>

int add(){
    int a, b;
    printf("Enter  numbers a ");
    scanf("%d", &a);
    printf("Enter  numbers b ");
    scanf("%d", &b);
    int d = 3.14*a*a;
    return d;
   

}
int main() {
    
    printf("%d", add());
    
    return 0;
}