#include <stdio.h>
#include <stdlib.h>
#include<time.h>
// CHANGE CODE BELOW THIS LINE

// Create an array from 1 to 100
void createArray(int arr[], int size) {
    for(int i=0;i<size;i++){
        arr[i] =i+1;
    }
}

// shuffle that array
void shuffleArray(int arr[], int size) {
   
    srand(time(NULL));
   short x= rand();
//    x =x/10000;
// int index1;
// int index2;
do{
   
    x =x%100;
  }while(x>100);
int temp;
//arr[0] = x;
//printf("j");
   for(int i= 0;i<size;i=i+2){
    //    index1 =i;
    //    index2 =i+1;
    // for(int j =1;j<40;j=j+2){
         if(i==98){
        break;
      }
     temp = arr[i];
     arr[i] =arr[i+1];
     arr[i+1] =temp;
     
   }
  
}

// Replace value of any random index with 0
void replaceRandomNumber(int arr[], int size){
   
   
    srand(time(NULL));
   short x= rand();
  // x =x%100;
  
    //scanf("%d",&index);
  // temp =arr[];
  //temp =arr[x];
  do{
   
    x =x%100;

  }while(x>100);
 // printf("%d",x);
  if(x<0){
    x= -(x);
  }
  arr[x]= 0 ;

}

// Find out the missing number in array of 0 to 100 (which is replaced by 0)
int findMissingNumber(int arr[], int size) {
   int temp =0;

    srand(time(NULL));
   int x= rand();
   do{
    x =x%10;
  }while(x>100);
 // printf("%d",x);
  // x =x/1000000;
  int sum =0;
  for(int i=0;i<size;i++){
    sum =sum+arr[i];
  }
int a =5050 -sum;
   return a;
}

// Sort that array
void sortArray(int arr[], int size) {
int temp;
  for(int i=0;i<size-1;i++){
    for(int j =i+1;j<size-1-i;j++){
        if(arr[j]>arr[j+1]){
           temp =arr[j];
           arr[j] =arr[j+1];
           arr[j+1] =temp;
        }
    }
  }
}


// CHANGE CODE ABOVE THIS LINE
int main() {
    runTestCase();
    return 0;
}

void runTestCase() {
    int arr[100];
    int missingNumber;

    createArray(arr, 100);
    printf("Generated Array: ");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    
    shuffleArray(arr, 100);
    printf("\n\nShuffled Array: ");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    
    replaceRandomNumber(arr, 100);
 
    missingNumber = findMissingNumber(arr, 100);
    printf("\n\nMissing number: %d", missingNumber);
    
    sortArray(arr, 100);
    printf("\n\nSorted Array: ");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


