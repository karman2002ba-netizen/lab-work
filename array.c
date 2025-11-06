#include<stdio.h>

int main(){

int n;
int i;
printf("Enter a number: ");
scanf("%d",&n);

if(n<2){
    printf("Array should have at least two elements\n");
    return 0;
}

int arr[n];
 printf("Enter %d elements:\n", n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}


if(arr[1]>arr[0] && arr[2]>arr[1]){
    printf("Second largest element is: %d\n",arr[2]);
} else {
    printf("Second largest element is: %d\n",arr[1]);
}














    return 0;
}