// /*
// Problem Statement:

// Write a C program that takes two arrays as input and determines whether they are equal or not. 
// The program should compare the elements of both arrays and return true if they have the same elements in any order, and false otherwise.

// Inputs:

// Two arrays A[] and B[] of integers.
// The size of the arrays N, where N represents the number of elements in each array.
// Output:
// True if the arrays A[] and B[] are equal, false otherwise.

// Example:
// -------------
// Input:
// N = 3
// A[] = {1, 2, 5}
// B[] = {2, 5, 1}

// Output:
// True
// -------------
// Input:
// A[] = {1, 2, 5, 1}
// B[] = {2, 5, 1, 2}

// Output:
// False
// -------------
// Input:
// A[] = {1, 2, 5, 1}
// B[] = {2, 5, 1, 5}

// Output:
// False
// -------------
// Note:

// - The program should handle arrays of any size.
// - The order of elements in the arrays does not matter for determining equality.
// - The program should provide the correct output for all possible valid inputs.

// */

// #include<stdio.h>
// void takeinputarray(int n,int arr[]){
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void printarray(int arr[],int n){
//     printf("\n{ ");
//     for(int i=0;i<n;i++){
//         printf(" %d ,",arr[i]);
//     }
//     printf("}\n");
// }
// int comparearray(int arr1[],int arr2[],int n){
// int size =n;
// int flag =0;
//     for(int i=0;i<n;i++){
        
//         for(int j=0;j<size;j++){
//             flag =0;
//             if(arr1[i] == arr2[j]){
//                 flag =1;
//                  for(int k =j;k<size-1;k++){
//                     arr2[k] =arr2[k+1];
//                  }
//                  size =size-1;
//                  j=j-1;
//                  break;
//             }
//         }
//         if(flag ==0){
//             return -1;
//         }
//     }
//     if(flag == 1){
//         return 1;
//     }else{
//         return -1;
//     }
// }
// int main(){
//     int N;
//     printf("How many elements you wanna store in array :");
//     scanf("%d",&N);
//     int arr1[N];
    
//     int arr2[N];
//     printf("\nEnter the %d elements of first array :",N);
//     takeinputarray(N,arr1);
//      printf("\nEnter the %d elements of second array :",N);
//     takeinputarray(N,arr2);
//      printf("\nThe %d elements of first array are:",N);
//     printarray(arr1,N);
//      printf("\nThe %d elements of second array :",N);
//     printarray(arr2,N);
//     int result = comparearray(arr1,arr2,N);
//     if(result == 1){
//         printf("\nBoth array are matched !!");
//     }else{
//         printf("\nBoth array are not matched !!");
//     }
//     return 0;
// }



/*
Problem Statement:

Write a C program that takes two arrays as input and determines whether they are equal or not. 
The program should compare the elements of both arrays and return true if they have the same elements in any order, and false otherwise.

Inputs:

Two arrays A[] and B[] of integers.
The size of the arrays N, where N represents the number of elements in each array.
Output:
True if the arrays A[] and B[] are equal, false otherwise.

Example:
-------------
Input:
N = 3
A[] = {1, 2, 5}
B[] = {2, 5, 1}

Output:
True
-------------
Input:
A[] = {1, 2, 5, 1}
B[] = {2, 5, 1, 2}

Output:
False
-------------
Input:
A[] = {1, 2, 5, 1}
B[] = {2, 5, 1, 5}

Output:
False
-------------
Note:

- The program should handle arrays of any size.
- The order of elements in the arrays does not matter for determining equality.
- The program should provide the correct output for all possible valid inputs.

*/

// #include<stdio.h>
// void takeinputarray(int n,int arr[]){
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void printarray(int arr[],int n){
//     printf("\n{ ");
//     for(int i=0;i<n;i++){
//         printf(" %d ,",arr[i]);
//     }
//     printf("}\n");
// }
// int comparearray(int arr1[],int arr2[],int n){
// int size =n;
// int index =0;
// int count =0;
// int flag =0;
// int temp;
//     for(int i=0;i<n;i++){
        
//         for(int j=index;j<size;j++){
//             flag =0;
//             if(arr1[i] == arr2[j]){
               
//                  flag =1;
//                   temp =arr2[count];
//                   arr2[count] = arr2[j];
//                   arr2[j] = temp;
//                     count ++;
//                     index++;
//                     break;

//             }

//         }
//         if(flag ==0){
//             return -1;
//         }
//     }
//     if(flag == 1){
//         return 1;
//     }else{
//         return -1;
//     }
// }
// int main(){
//     int N;
//     printf("How many elements you wanna store in array :");
//     scanf("%d",&N);
//     int arr1[N];
    
//     int arr2[N];
//     printf("\nEnter the %d elements of first array :",N);
//     takeinputarray(N,arr1);
//      printf("\nEnter the %d elements of second array :",N);
//     takeinputarray(N,arr2);
//      printf("\nThe %d elements of first array are:",N);
//     printarray(arr1,N);
//      printf("\nThe %d elements of second array :",N);
//     printarray(arr2,N);
//     int result = comparearray(arr1,arr2,N);
//     if(result == 1){
//         printf("\nBoth array are matched !!");
//     }else{
//         printf("\nBoth array are not matched !!");
//     }
//     return 0;
// }

/*
Problem Statement:

Write a C program that takes two arrays as input and determines whether they are equal or not. 
The program should compare the elements of both arrays and return true if they have the same elements in any order, and false otherwise.

Inputs:

Two arrays A[] and B[] of integers.
The size of the arrays N, where N represents the number of elements in each array.
Output:
True if the arrays A[] and B[] are equal, false otherwise.

Example:
-------------
Input:
N = 3
A[] = {1, 2, 5}
B[] = {2, 5, 1}

Output:
True
-------------
Input:
A[] = {1, 2, 5, 1}
B[] = {2, 5, 1, 2}

Output:
False
-------------
Input:
A[] = {1, 2, 5, 1}
B[] = {2, 5, 1, 5}

Output:
False
-------------
Note:

- The program should handle arrays of any size.
- The order of elements in the arrays does not matter for determining equality.
- The program should provide the correct output for all possible valid inputs.

*/

// #include<stdio.h>
// void takeinputarray(int n,int arr[]){
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void printarray(int arr[],int n){
//     printf("\n{ ");
//     for(int i=0;i<n;i++){
//         printf(" %d ,",arr[i]);
//     }
//     printf("}\n");
// }
// int comparearray(int arr1[],int arr2[],int n){
// int size =n;
// int index =0;
// int count =0;
// int flag =0;
// int temp;
//     for(int i=0;i<n;i++){
        
//         for(int j=index;j<size;j++){
//             flag =0;
//             if(arr1[i] == arr2[j]){
               
//                  flag =1;
//                   temp =arr2[count];
//                   arr2[count] = arr2[j];
//                   arr2[j] = temp;
//                     count ++;
//                     index++;
//                     break;

//             }

//         }
//         if(flag ==0){
//             return -1;
//         }
//     }
//     if(flag == 1){
//         return 1;
//     }else{
//         return -1;
//     }
// }

// void unique_found_array(int arr1[],int arr2[],int n){
//     int flag =0;
//     int index =0;
//     int new_arr[n+n];
//     int j;
//     int size =n;
// for(int i =0;i<n;i++){
//     for(int j =0;j<size;j++){
//         flag =0;
//         if(arr1[i] == arr2[j]){
//                flag =1;
//                for(int k=j;k<size-1;k++){
//                     arr2[k]=arr2[k+1];
//                }
//                size =size -1;
//                break;
//         }
//             }
// if(flag ==0){
//    new_arr[index] =arr1[i];

//    index++;
// //    new_arr[index] =arr2[j];
// //    index++;
// }
// }
// for(int j =0;j<size;j++){
//     new_arr[index] = arr2[j];
//     index++;
// }
// printf("\nThe Unique elements are :");
// for(int i=0;i<index;i++){
//     printf("%d ",new_arr[i]);
// }
// }
// int main(){
//     int N;
//     printf("How many elements you wanna store in array :");
//     scanf("%d",&N);
//     int arr1[N];
    
//     int arr2[N];
//     printf("\nEnter the %d elements of first array :",N);
//     takeinputarray(N,arr1);
//      printf("\nEnter the %d elements of second array :",N);
//     takeinputarray(N,arr2);
//      printf("\nThe %d elements of first array are:",N);
//     printarray(arr1,N);
//      printf("\nThe %d elements of second array :",N);
//     printarray(arr2,N);
//     int result = comparearray(arr1,arr2,N);
//     if(result == 1){
//         printf("\nBoth array are matched !!");
//     }else{
//         printf("\nBoth array are not matched !!");
//     }
//     unique_found_array(arr1,arr2,N);
//     return 0;
// }








// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// // CHANGE CODE BELOW THIS LINE

// int getRandom(){
//     srand(time(NULL));
//     return rand()%100;
// }
// // Create an array from 1 to 100
// void createArray(int arr[], int size) {
//     for(int i=0;i<size;i++){
//         arr[i]=i+1;
//     }
// }

// // shuffle that array
// void shuffleArray(int arr[], int size) {
//    int temp;
//    int random;
// //    for(int i=0;i<size;i++){
// //     for(int j=i+1;j<size/2;j=j+2){
        
// //         temp =arr[j];
// //         arr[j] =arr[j+2];
// //         arr[j+2] =temp;

// //     }
// //    }
    
//    for(int i=0;i<size;i++){
//     random = getRandom();
//     temp = arr[i];
//     arr[i] = arr[random];
//     arr[random] = temp;
//    }
// }

// // Replace value of any random index with 0
// void replaceRandomNumber(int arr[], int size) {
//     int x;
//     x= getRandom();
//     arr[x] =0;
// }

// // Find out the missing number in array of 0 to 100 (which is replaced by 0)
// int findMissingNumber(int arr[], int size) {
//    int sum = (size*(size+1))/2;
//    int sum2 =0;
//    for(int i=0;i<size;i++){
//     sum2 = sum2+arr[i];
//    }
//    return sum-sum2;
// }

// // Sort that array
// void sortArray(int arr[], int size) {
// int temp;
// for(int i=0;i<size-1;i++){
//     for(int j=0;j<size-1-i;j++){
//         if(arr[j]>arr[j+1]){
//             temp =arr[j];
//             arr[j] =arr[j+1];
//             arr[j+1] =temp;
//         }
//     }
// }
// }


// // CHANGE CODE ABOVE THIS LINE
// int main() {
//     runTestCase();
//     return 0;
// }

// void runTestCase() {
//     int arr[100];
//     int missingNumber;

//     createArray(arr, 100);
//     printf("Generated Array: ");
//     for (int i = 0; i < 100; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     shuffleArray(arr, 100);
//     printf("\n\nShuffled Array: ");
//     for (int i = 0; i < 100; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     replaceRandomNumber(arr, 100);
 
//     missingNumber = findMissingNumber(arr, 100);
//     printf("\n\nMissing number: %d", missingNumber);
    
//     sortArray(arr, 100);
//     printf("\n\nSorted Array: ");
//     for (int i = 0; i < 100; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }


