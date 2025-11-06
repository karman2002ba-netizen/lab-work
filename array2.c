#include<stdio.h>

int main(){

    int n,i;
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

        if(arr[i]<0){
            printf("negative\n");
            return 0;
        }else if(arr[i]>0){
            printf("Positive\n");
            return 0;
        }

        if(arr[i]%2==0){
            printf("Even\n");
            return 0;
        }else{
            printf("Odd\n");
            return 0;
        }
    }




















    return 0;
}