#include<stdio.h>

int main(){


int a;
int b;
int c;
int d;
int e;
int f;


printf("enter a\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
printf("enter c\n");
scanf("%d",&c);
d = a+b;
e = a+c;
f = b+c;
if(d>c , e>b, f>a){
    printf("triangle is valid");
}else{
    printf("triangle is not valid");
}

if(a==b && b==c){
    printf("triangle is equilateral");
}else if(a==b || a==c){
    printf("triangle is isoscles");
}else if((a*a==b*b + c*c),(b*b==a*a+c*c),(c*c==a*a+b*b)){
    printf("triangle is right angle");
}else{
    printf("triangle is scalene");
}








































    

    return 0;
}