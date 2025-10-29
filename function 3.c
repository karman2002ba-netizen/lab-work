
//Declare variables within different code blocks (enclosed by curly braces) and test their 
//accessibility within and outside those blocks.



#include <stdio.h>

int main() {
    int x = 10; 
    printf("x inside main = %d\n", x);

    {
        int y = 20; 
        printf("x inside inner block = %d\n", x); 
        printf("y inside inner block = %d\n", y); 
    }

   

    {
        int z = 30;
        printf("x inside second block = %d\n", x); 
        printf("z inside second block = %d\n", z); 
    }

   

    return 0;
}
