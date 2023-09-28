#include<stdio.h>

int main(){
    int max=0;
    int min=100;
    
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array :");
    for(int i=0;i<size;i++){
        
        scanf("%d",&arr[i]);
    }
    printf("Our Array is :\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<size;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("the maximum element is %d and minimum is %d",max,min);
    return 0;
}