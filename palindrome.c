
// //Q.) Write code Check if the given string is Palindrome or not

// #include<stdio.h>
// #include<string.h>
// int main(){
// char str[50];
// printf("Enter the string :");
// scanf("%s",str);
// char newstr[50];
// int j=0;
// int flag=0;
// for(int i=strlen(str)-1;i>=0;i--){
// newstr[j]=str[i];
// j++;
// }
// for(int i=0;i<strlen(str);i++){
//     flag=0;
//     if(str[i]==newstr[i]){
//         flag=1;
//     }else{
//         flag=0;
//         break;
//     }
// }
// if(flag==1){
//     printf("Given String is Palindrome ");
// }else{
//     printf("Given String is not a Palindrome ");
// }
//     return 0;
// }


//2. Write a code for bubble sort
// #include<stdio.h>
// int main(){
//     int array[] = {
//     5,
//     3,
//     1,
//     9,
//     8,
//     2,
//     4,
//     7
//   };
//   int size=sizeof(array)/sizeof(array[0]);
//   for(int i=0;i<size-1;i++){
//     for(int j=0;j<size-1-i;j++)
// {
//     if(array[j]>array[j+1]){
//         int temp=array[j];
//         array[j]=array[j+1];
//         array[j+1]=temp;
//     }
// }
//   }
//   printf("After applying Bubble Sort to given array our array is -\n");
//   for(int i=0;i<size;i++){
//     printf("%d ",array[i]);
//   }
//     return 0;
// }

//3. Write a code to find non-repeating elements in an array. 


// #include<stdio.h>
// int main(){
//      int arr[] = {21, 30, 10, 2, 10, 20, 30, 11}; 
// // int arr[]={5,4,3,2,1,2,32,3};
// int flag=0;
// int size=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<size;i++){
//     flag=0;
//     for(int j=i+1;j<size;j++){
        
//         if(arr[i]==arr[j]){
//             flag=1;
//             for(int k=j;k<size-1;k++){
//                 arr[k]=arr[k+1];
//             }
//              size=size-1;
//              j=j-1;
//         }
       
        
//     }
//     if(flag==1){
//     for(int p=i;p<size-1;p++){
//         arr[p]=arr[p+1];
//     }
//     size=size-1;
//     i=i-1;
//     }
// // for(int i=0;i<size;i++){
// //     printf("%d ",arr[i]);
// // }
// // printf("\n");
// }
// // printf(")");
// for(int i=0;i<size;i++){
//     printf("%d ",arr[i]);
// }
//     return 0;
// }


//4. Write a code to check for the longest palindrome in an array.
// #include<stdio.h>
// int main(){

//     return 0;
// }

//5. Write the code to for Armstrong number 
// #include<math.h>
// #include<stdio.h>

// int main(){
//     int number;
//     printf("Enter the number :");
//     scanf("%d",&number);
//     int digit=0;
//     int temp= number;
//     while(temp>0){
//         temp=temp/10;
//         digit++;
      
//     }
//     int sum=0;
//     int rem=0;
//     int temp2=number;
// while(temp2>0){
// rem=temp2%10;
// temp2=temp2/10;
// sum= sum +(pow (rem,digit));
// rem=0;
// }
// if(number==sum){
//     printf("%d is an Armstrong Number",number);
// }else{
//     printf("%d is not an Armstrong Number",number);
// }

//     return 0;
// }


//6
