// //Q.1) Write a C program to convert a given string to uppercase.

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];

//     printf("Enter the String :");
   
//     scanf("%[^\n]",str);
//    int len=strlen(str);
// for(int j=0;j<len;j++){
//     if(str[j]>='a' && str[j]<='z'){
//     str[j]-=32;
//  }
// }
//     printf("%s",str);

//     return 0;
// }



// #include<stdio.h>
// #include<string.h>

// int main(){
//      int size;
//      char str[50];
     
//      printf("enter the string :");
//      gets(str);
//      size=strlen(str);
//      for(int i=0;i<size;i++){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i]=str[i]-32;
//         }
//      } 
//      puts(str);
//     return 0;
// }


//Q.2)Write a program to find the second largest element in an integer array.
// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the Size of the Array :");
//     scanf("%d",&size);
//     int arr[size];
//     int firstmax=-1;
//     int secmax=-1;
//     printf("Enter the elements of Array :\n");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("The elements of Array are :");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
// for(int i=0;i<size;i++){
//     if(firstmax<arr[i]){
//         secmax=firstmax;
//         firstmax=arr[i];
//     }else{
//         //4 2 1
//         if(secmax<arr[i] && arr[i]!=firstmax){
//             secmax=arr[i];
//         }
//     }
// }
// printf("\nThe First largest element in Array is :%d\n",firstmax);
// printf("The Second Largest eleement in Array is : %d",secmax);
//     return 0;
// }



//Q.3) Write a program to reverse the elements of an array.

// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the Size of the Array :");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter elements of Array :");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\nReversing the elements of an array :");
//     for(int i=size-1;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


//Q.4) Write a program to remove duplicate elements from an array.
// #include<stdio.h>
// int main(){
//         int size;
//     printf("Enter the Size of the Array :");
//     scanf("%d",&size);
//     int arr[size];
//     int flag=0;
//     printf("Enter elements of Array :");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<size;i++){
//         flag=0;
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                   flag=1;
//                 for(int k=j;k<size-1;k++){
//                 arr[k]=arr[k+1];
//             }
//             size--;
//         j--;
//             }

//         }
//         if(flag==1){
//             for(int k=i;k<size-1;k++){
//                 arr[k]=arr[k+1];
//             }
//             size--;
//             i--;
//         }
//     }
//         printf("\nThe elements of an array :");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


//Q.5)Write a program to sort an array in ascending order.

// #include<stdio.h>
// int main(){
//             int size;
//     printf("Enter the Size of the Array :");
//     scanf("%d",&size);
//     int arr[size];
   
//     printf("Enter elements of Array :");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     printf("\nAfter Sorting the elements of an array :");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


//Q.6) Write a program to reverse a given string.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[50];
//     printf("Enter String :");
//     scanf("%[^\n]",str);
//     int len=strlen(str);
//     printf("\nAfter Reversing Our String is :");
//     for(int i=len-1;i>=0;i--){
//         printf("%c",str[i]);
//     }
//     return 0;
// }

//Q.7) Write a C program to compare two strings without using the strcmp() function.

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[50],str2[50];
//     printf("Enter 1st String :");
//     scanf("%[^\n]",str1);
//     printf("\nEnter 2nd String :");
//     scanf(" %[^\n]",str2);
   
//     int len1=strlen(str1);
//     int len2=strlen(str2);
//     // printf("%d %d\n",len1,len2);
//     int flag=0;
//     if(len1==len2){
//         for(int i=0;i<len1;i++){
//             if(str1[i]==str2[i]){
//                 flag=1;

//             }else{
//                 flag=0;
//                 break;
//             }
//         }
//        if(flag==1){
//         printf("\nBoth String are matched");

//        }else{
//         printf("\nBoth String are not matched");
//        }
//     }else{
//         printf("\nBoth String are not matched");
//     }

//     return 0;
// }


//Q.8) Write a C program to remove all occurrences of a given character from a string.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[50];
//     printf("Enter the String :");
//     scanf("%[^\n]",str);
//     char ch;
//     int len=strlen(str);
//     printf("Enter the character :");
//     scanf(" %c",&ch);
//     for(int i=0;i<len;i++){
//         if(ch==str[i]){
//             for(int j=i;j<len-1;j++){
//                 str[j]=str[j+1];
//             }
//             len--;
//             i--;
//         }
//     }
//     printf("Our String is :");
//     for(int i=0;i<len;i++){
//         printf("%c",str[i]);
//     }
//     return 0;
// }

//Q.9) Write a C program to find the first non-repeating character in a given string.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[50];
//     printf("Enter the String :");
//     scanf("%[^\n]",str);
//     char ch;
//     int flag=0;
//     int len=strlen(str);
//     for(int i=0;i<len;i++){
//  flag=1;
//   if(str[i]>='a' && str[i]<='z'){
//         for(int j=i+1;j<len;j++){
         
//             if(str[i]==str[j]){
//                flag=0;
//                 //  printf("%c %c\n",str[i],str[j]);
//               for(int k=j;k<len-1;k++){
//                 str[k]=str[k+1];
//               }
//               len--;
//               j--;
                
//             }
//         }
//         }else{
//             flag=0;
//         }
//         if(flag==1){
//             ch=str[i];
//             break;
//         }
//     }
//     printf("The first non-repeating character in given string is : %c",ch);
//     return 0;
// }




//Q.10) Write a program to take two numbers as input from the user and print their sum.
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("Sum is %d",a+b);
// }

//Q.11) Write a program to take a number as input from the user and print whether it is even or odd.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter number :");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("%d is even",a);
//     }else{
//         printf("%d is odd",a);
//     }
//     return 0;
// }

//Q.12) Write a program to find the factorial of a number.
//Using iterative Approach -

// #include<stdio.h>
// int main(){
// int a;
// int pro=1;
// printf("Enter Number :");
// scanf("%d",&a);
// for(int i=1;i<=a;i++){
// pro=pro*i;
// }

// int b=a;
// while(a>=1){
//     pro=pro*a;
//     a--;
// }

// int b=a;
// do{
// pro=pro*a;
// a--;
// }while(a>=1);
// printf("The factorial of %d is %d",b,pro);
//     return 0;
// }

//Using Recursive Approach-
// #include<stdio.h>
// int fact(int a){
//     if(a<=1){
//         return 1;
//     }else{
//         return a*fact(a-1);
//     }
// }
// int main()
// {
//     int a;
// int pro;
// printf("Enter Number :");
// scanf("%d",&a);
// pro=fact(a);
// printf("The factorial of %d is %d",a,pro);
//     return 0;
// }

//Q.13) Write a program to calculate the sum of the first n natural numbers.
// #include<stdio.h>
// int naturalsum(int a){
//     if(a<=1){
//         return 1;
//     }else{
//         return a+naturalsum(a-1);
//     }
// }
// int main(){
//         int a;
//     printf("Enter number :");
//     scanf("%d",&a);
    //using formula   int sum=(a*(a+1))/2;
    //using iterative approach-
    /*
    int sum=0;
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    */
//using recursive approach-
// int sum =naturalsum(a);
//     printf("sum is : %d",sum);
// }


//Q.14) Write a program to print the Fibonacci series up to a given number.
// #include<stdio.h>
// void fact(int a, int b,int s){
//     int sum=a+b;
//     if(s>=1){
//     printf("%d ",sum);
//      fact(b,sum,s-1);
//     }
// }
// int main(){
//             int n;
//     printf("Enter number :");
//     scanf("%d",&n);
// int a=0;
// int b=1;
// int s=n-2;
// int sum;
// printf("%d %d ",a,b);
//Using Iterative Approach-
/*
while(s>=1){
sum=a+b;
printf("%d ",sum);
a=b;
b=sum;
s--;
} */

//Using Recursive Approach-
// fact(a,b,s);
// return 0;
// }


//Q.15) Write a program to convert a binary number to decimal.

// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int Pow(int a,int b){
//     int power=1;
//     for(int i=1;i<=b;i++){
//         power=power*a;
//     }
//     return power;
// }
// int main(){
//     int size;
//     printf("Enter size :");
//     scanf("%d",&size);
//     int arr[size];
//     int sum=0;
//     int j=0;
//     printf("Enter binary digit :");
//    for(int i=0;i<size;i++){
//     scanf("%d",&arr[i]);
//    }
//    for(int i=size-1;i>=0;i--){
//      sum+=arr[i]*Pow(2,j);
//      j++;
//    }
//    printf("The decimal number is %d",sum);
//     return 0;
// }

