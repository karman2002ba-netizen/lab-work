//Write a program to calculate the area of circle, rectangle and triangle using separate 
//functions

#include <stdio.h>

int add(){
    int a, b;
    printf("Enter  numbers a ");
    scanf("%d", &a);
    printf("Enter  numbers b ");
    scanf("%d", &b);
    int d = 0.5*a*b;
    return d;
   

}
int main() {
    
    printf("%d", add());
    
    return 0;
}