// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter no. of strings :");
//     scanf("%d",&n);
//     char arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%s",&arr[i]);
//     }
//     printf("Strings are :");
//     for(int i=0;i<n;i++){
//         printf("%s",arr[i]);
//     }
//     return 0;
// }

//1)Write a Program to Find the Sum of Natural Numbers using Recursion.
// #include<stdio.h>
// int func(int n){
//    int sum;
//    if(n>1){
//     return n+func(n-1);
//        }else{
//         return 1;
//        }    
// }
// int main(){
// int n;
// printf("Enter the number where you want the sum :");
// scanf("%d",&n);
// int sum=func(n);
// printf("The sum of natural number till %d is : %d",n,sum);
//    return 0; 
// }



//2)  Write a code to find an Automorphic number.

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// int Pow(int n,int b){
//     if(b!=0){
//         return n*Pow(n,b-1);

//     }else{
//         return 1;
//     }
// }
// int main(){
//     int n;
//     int quotient;
//     int temp;
//     int temp2;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     quotient=10;
//     temp=n;
//     int digitcount=0;
//     while(quotient!=0){
//         quotient=temp/10;
//         temp=quotient;
//         digitcount++;

//     }
//     printf("%d",digitcount);
//     int arr[digitcount];
//     int square=n*n;
//     int i=0;
//     printf("Its Square is : %d",square);
//     while(digitcount!=0){
//          arr[i]=square%10;
//          digitcount--;
//          square=square/10;
// i++;
//     }
//      int squaredigit=0;
   
//     for(int j=0;j<i;j++){
// squaredigit+=Pow(10,j)*arr[j];
//     }
//     printf("\nIts Squaredigit is : %d\n",squaredigit);
//     if(n==squaredigit){
//         printf("%d is an automorphic number",n);
//     }else{
//         printf("%d is not an automorphic number",n);
//     }
//     return 0;
// }

//3) Write a code to Print the smallest element of the array
// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the size : ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the elements of the array : ");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     int min=__INT16_MAX__;
//     for(int i=0;i<size;i++){
//         if(min>=arr[i]){
//             min=arr[i];
//         }
//     }
//     printf("The smallest element is : %d ",min);
//     return 0;
// }

//4)Given two strings a and b consisting of lowercase characters.
// The task is to check whether two given strings are an anagram of each other or not.
// An anagram of a string is another string that contains the same characters, 
//only the order of characters can be different. For example, act and tac are an anagram of each other.

// Note:-

//     If the strings are anagrams you have to return True or else return False

//     |s| represents the length of string s.

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[40];
//     char b[40];
//     printf("Enter the 1st string :");
//     scanf("%s",a);
//     printf("Enter the 2nd string :");
//     scanf("%s",b);
//     // printf(" %c",a[3]);
//     int len1=strlen(a);
//     int len2=strlen(b);
//     int flag=0;
//     if(len1==len2){
//            for(int i=0;i<len1;i++){
//             flag=0;
//             for(int j=0;j<len2;j++){
//                 if(a[i]==b[j]){
//                     flag=1;
//                     for(int k=j;k<len2-1;k++){
//                         b[k]=b[k+1];
//                     }
//                     len2--;
//                     break;
//                 }else{
//                     flag=0;
//                 }
//             }
//             if(flag==0){
//                printf("Both Strings are not anagram ");
//                break;  
//             }
//            }
//            if(flag==1){
//             printf("Both Strings are Anagram ");
//            }
//     }else{
//         printf("Both Strings are not anagram ");
//     }
//     return 0;
// }


//5) Given an array of distinct integers. 
//The task is to count all the triplets such that sum of two elements equals the third element.
// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the size of the array :");
//     scanf("%d",&size);
//     int arr[size];
//     int arr2[40];
//     printf("Enter elements of the array : ");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Our Array is -\n[ ");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("]");
//     int temp;
//     int count=0;
//     int p=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//              /*temp=arr[i]+arr[j];
//              for(int k=0;k<size;k++){
//                 if(temp==arr[k]){
//                      count++;
//                 }
//              }
//              */
//             arr2[p]=arr[i]+arr[j];
//             p++;
//         }
//     }
//     for(int k=0;k<p;k++){
//         for(int i=0;i<size;i++){
//             if(arr2[k]== arr[i]){
//                 count++;
//             }
//         }
//     }
//     printf("The Number of Triplets are : %d\n",count);
//     return 0;
// }

//6) Given an array of size N-1 such that 
//it only contains distinct integers in the range of 1 to N. Find the missing element.

// #include<stdio.h>
// int main(){
//     int size;
//     printf("Give the size of array :");
//     scanf("%d",&size);
//     int sum=(size*(size+1))/2;
//     int arr[size-1];
//     int regularsum=0;
//     printf("Enter the elements of the array in given size number :\n");
//      for(int i=0;i<size-1;i++){
//         scanf("%d",&arr[i]);
//         regularsum+=arr[i];
//      }
//      printf("The Missing Number is :%d ",sum-regularsum);
//     return 0;
// }

// 7)Given a sorted array of positive integers.
//  Your task is to rearrange the array elements alternatively 
//  i.e first element should be max value, second should be min value,
//   third should be second max, fourth should be second min and so on.
// Note: Modify the original array itself. 
// Do it without using any extra space. You do not have to return anything.


// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the size of the array :");
//     scanf("%d",&size);
//     int arr[size];
//     int newarr[size];
//     printf("enter the elements of the array in sorted way-\n");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Our Sorted Array is -[ ");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("]\n");
//     int p=0;
//     int q=size-1;
//     for(int i=0;i<size/2;i++){
//         printf("%d %d ",arr[q],arr[p]);
//         p++;
//         q--;
//     }
//     if(size%2!=0){
//         printf("%d",arr[p]);
//     }
//     return 0;
// }

//8)Given an array of integers. Find the Inversion Count in the array. 

// Inversion Count: For an array, inversion count indicates how far (or close)
//  the array is from being sorted. If the array is already sorted then the inversion count is 0.
// If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the size of the array :");
//     scanf("%d",&size);
//     int arr[size];
//      printf("enter the elements of the array -\n");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     int count=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]>arr[j]){
//                 printf("pair (%d,%d)\n",arr[i],arr[j]);
//                 count++;
//             }
//         }
//     }
//     printf("Inversion Count is %d",count);
//     return 0;
// }


//9) Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
// #include<stdio.h>

// int main(){
//  int size;
//     printf("Enter the Size of the Array :");
//     scanf("%d",&size);
// int arr[size];
// int zerocount=0,twocount=0,onecount=0;
// printf("Enter the elements of the array contain only (0s,1s,2s) -\n");
// for(int i=0;i<size;i++){
// scanf("%d",&arr[i]);
// if(arr[i]==0){
//     zerocount++;
// }else if(arr[i]==1){
//     onecount++;
// }else{
//     twocount++;
// }

// }

// int p=0,q=0;
// for(int j=0;j<size;j++){
//     if(p<zerocount){
//         arr[p]=0;
//         p++;
//     }else if(q<onecount){
//         arr[p]=1;
//         p++;
//         q++;
//         // printf("%d %d",p,q);
//     }else{
//         arr[p]=2;
//         p++;
//     }
// }
// printf("After Sorting Our Array is -\n");
// for(int i=0;i<size;i++){
//     printf("%d ",arr[i]);
// }

//     return 0;
// }

//10) Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

//Note: If at any instance, there are no more subarrays of size greater than or equal to K,
// then reverse the last subarray (irrespective of its size).
// You shouldn't return any array, modify the given array in-place.
// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the Size :");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the elements of the Array-\n");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     //int k,q,temp;
//     int k;
//     printf("Enter the value of K :");
//     scanf("%d",&k);
  
    
//       int pair=size/k;
//    int a=0;
//    int b=k-1;
//    int count=0;
//    int tt=1;
//    int temp;
    
    
//     int s=pair;
//     repeat:
//     for(int i=0;i<k/2;i++){
//         temp=arr[a];
//         arr[a]=arr[b];
//         arr[b]=temp;
//         b--;
//         a++;
       
       
        
//     }
//     count++;
//     tt++;
//      s--;
//     // printf("%d",s);
//     if(s>0){
       
//         // printf("h\n");
        
//         a=count*k;
// b=tt*(k)-1;
//             goto repeat;
//         }
//     // int t=pair *k;
//    a=count*k;
//    b=size-1;
//    int times=size-(pair*k);
//     for(int j=0;j<times/2;j++){
//            temp=arr[a];
//            arr[a]=arr[b];
//            arr[b]=temp;
//            a++;
//            b--;
//     }
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }


//11) Given an array arr[] and an integer K where K is smaller than size of array, 
//the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

//Note :-  l and r denotes the starting and ending index of the array.

// #include<stdio.h>

// int main(){
//     int size;
//     printf("Enter the size of the Array :");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the elements of the Array :\n");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);

//     }
//     int k;
//     printf("Enter the K smaller than size of array :");
//     scanf("%d",&k);

//That's how we sort array in single loop -

//     for(int i=0;i<size-1;i++){
//         if(arr[i]>arr[i+1]){
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//             i=-1;
//         }
//     }
//     printf("After Sorting our Array is - \n");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("The Kth smallest element in an array is :%d",arr[k-1]);
//     return 0;
// }


//12)Given a string S consisting only '0's and '1's,  find the last index of the '1' present in it.

//  #include<stdio.h>
// #include<string.h>
// int lastindex(char ch[],int size){
// char b='1';
//    for(int i=size-1;i>=0;i--){
//     if(ch[i]==b){
//         return i;
//     }
//    }
//    return -1;
// }
//  int main(){
//     int size;
//     printf("Enter the size of string :");
//     scanf("%d",&size);
//     char S[size];
//     printf("Enter the String :\n");
//     for(int i=0;i<size;i++){
//     scanf(" %c",&S[i]);
//     }
// int a=lastindex(S,size);
// printf("1 is occur in String at Last Index is :%d",a);
    
//     return 0;
//  }


//13)Given an unsorted array of size N.
// Find the first element in array such that all of its left elements are smaller
// and all right elements to it are greater than it.

//Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.
// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the Size :");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the elements of the array :\n");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     int v=1;
//     int flag=0;
// int i,j,a;
//     repeat:
//      a =arr[v];

// i=v-1;
// j=v+1;
//     while(i>=0 && j<=size-1){
//         if(arr[v]>arr[i] && arr[v] <arr[j]){
//                    flag=1;
//                     i--;
//                     j++;
//         }else{
//             flag=0;
//             if(v<=size-1){
//                 v++;
//             }
//             goto repeat;
//             break;
//         }
//     }
//     if(flag==1){
//         printf("The First Element is : %d",arr[v]);
//     }else{
//         printf("The First Element is :%d",-1);
//     }
//     return 0;
// }


//14)Given a string without spaces, the task is to remove duplicates from it.

//Note: The original order of characters must be kept the same. 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int size;
//     printf("Enter size of String :");
//     scanf("%d",&size);
//     char ch[size];
//     printf("Enter the String :");
//     for(int i=0;i<size;i++){
//     scanf(" %c",&ch[i]);
//     }
//     char c;
//     for(int i=0;i<size;i++){
//        for(int j=i+1;j<size;j++){
//         if(ch[i]==ch[j]){
//             for(int k=j;k<size-1;k++){
//                 ch[k]=ch[k+1];
//             }
//             size=size-1;
//             j--;
//         }
//        }
//     }
//  for(int i=0;i<size;i++){
//     printf("%c",ch[i]);
//     }
//     return 0;
// }
