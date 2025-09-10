#include<stdio.h>

int main(){


float weight,height,bmi;
printf("enter weight\n");
scanf("%f",&weight);
printf("enter heightt\n");
scanf("%f",&height);

bmi =weight/(height*height);

printf("bmi is %f",bmi);

if(bmi<15){
    printf("starvation");
}else if(bmi>15.1 && bmi<17.5){
    printf("Anorexic");
}else if (bmi>17.6 && bmi<18.5){
    printf("underweight");
}else if(bmi>18.6 && bmi<24.9){
    printf("ideal");
}else if(bmi>25 && bmi<25.9){
    printf("overweight");
}else if(bmi>30 && bmi<39.9){
    printf("obese");
}else if(bmi>40){
    printf("morbidity obese");
}



    return 0;
}