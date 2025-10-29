#include <stdio.h>

int add(){
    int a, b;
    printf("Enter  numbers a ");
    scanf("%d", &a);
    printf("Enter  numbers b ");
    scanf("%d", &b);
    int d = 2*(a+b );
    return d;
   

}
int area2(){
    int c, d;
    printf("Enter  numbers c ");
    scanf("%d", &c);
    printf("Enter  numbers d ");
    scanf("%d", &d);
    int k = 0.5*c*d;
    return k;}

    int area(){
    int e, f;
    printf("Enter  numbers e ");
    scanf("%d", &e);
    printf("Enter  numbers f ");
    scanf("%d", &f);
    int h = 3.14*e*e;
    return h;}
int main() {
    
    printf("%d", add());
    printf("%d", area2());
    printf("%d", area());
    
    return 0;
}