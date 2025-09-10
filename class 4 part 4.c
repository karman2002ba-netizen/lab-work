#include<stdio.h>

int main(){

int x1;
int y1;
int x2;
int y2;
int x3;
int y3;
int slope1;
int slope2;

printf("enter x1 \n");
scanf("%d",&x1);
printf("enter y1 \n");
scanf("%d",&y1);
printf("enter x2 \n");
scanf("%d",&x2);
printf("enter y2\n");
scanf("%d",&y2);
printf("enter x3 \n");
scanf("%d",&x3);
printf("enter y3 \n");
scanf("%d",&y3);

slope1 = (y2-y1)/(x2-x1);
slope2 = (y3-y2) / (x3-x2);

if(slope1 == slope2){
    printf("collinear");
}else{
    printf("not collinear");
}





    return 0;
}