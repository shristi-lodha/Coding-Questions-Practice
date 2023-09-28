//Q.1)
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
/*
#include<stdio.h>
int main(){
    int num=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}*/


//By Using While Loop-

// #include<stdio.h>
// int main(){
//     int n=4;
//     int num=1;
//     int i=1,j=1;
//     while(i<=n){
//         while(j<=i){
//             printf("%d ",num);
//             num++;
//             j++;
//         }
//         printf("\n");
//         i++;
//         j=1;
//     }
//     return 0;
// }

//Q.2)
//1 1 1
//2 2 2
//3 3 3

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//By Using while Loop-

// #include<stdio.h>
// int main(){
//     int i=1;
//     int n=3;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             printf("%d ",i);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }

//Q.3)
//1 2 3 4
//1 2 3 4
//1 2 3 4
//1 2 3 4
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//By Using While Loop-

// #include<stdio.h>
// int main(){
//     int i=1,n=4;
// while(i<=n){
//     int j=1;
// while(j<=n){
//     printf("%d ",j);
//     j++;

// }
// printf("\n");
// i++;

// }
//     return 0;
// }

//Q.4)
// * * * *
// * * * *
// * * * *
// * * * *

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
// for(int j=1;j<=4;j++){
//     printf("* ");
// }
// printf("\n");
//     }
//     return 0;
// }


//By Using While Loop-

// #include<stdio.h>
// int main(){
//     int i=1,j=1;
//     int n=4;
//     while(i<=n){
//         while(j<=n){
//             printf("* ");
//             j++;
//         }
//         printf("\n");
//         i++;
//         j=1;
//     }
//     return 0;
// }

//Q.5)
//1
//2 2 
//3 3 3
//4 4 4 4
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//By Using While Loop-
// #include<stdio.h>
// int main(){
//     int n=4;
//     int i=1,j=1;
//     while(i<=n){
//         while(j<=i){
//             printf("%d ",i);
//             j++;

//         }
//         printf("\n");
//         i++;
//         j=1;
//     }
//     return 0;
// }


//Q.6)
//*
//* *
//* * *
//* * * *
// #include<stdio.h>
// int main(){
// // By Using While Loop-
// int n=4;
// int i=1,j=1;
// while(i<=n){
//     j=1;
//     while(j<=i){
//         printf("* ");
//         j++;
//     }
//     printf("\n");
//     i++;
    
// }
// return 0;
// }


//By Using For Loop -
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Q.7)
//1 2 3 
//4 5 6
//7 8 9
// #include<stdio.h>
// int main(){
//     int num=1;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             printf("%d ",num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//By Using While Loop
// #include<stdio.h>
// int main(){
//     int num=1,i=1,j=1;
    // while(i<=3){
    //     while(j<=3){
    //         printf("%d ",num);
    //         num++;
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    //     j=1;
    // }

    //Using do-while loop-
//     do{
//         j=1;
//         do{
//              printf("%d ",num);
//              num++;
//              j++;
//         }while(j<=3);
// printf("\n");
// i++;
//     }while(i<=3);

//     return 0;
// }

//Q.8)
//Sum of Numbers 1 to N manually-
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter the Number where you Want the Sum :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("The Sum is : %d\n",sum);
//     return 0;
// }


//Q.9)
//Sum Of All Even Numbers Between 1 to N-
// #include<stdio.h>
// int main(){
//         int n,sum=0;
//     printf("Enter the Number where you Want the Sum :");
//     scanf("%d",&n);
//     // for(int i=0;i<=n;i+=2){
//     //     sum=sum+i;
//     // }
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             sum=sum+i;
//         }
//     }
//      printf("The Sum is : %d\n",sum);
//     return 0;

// }


//Q.10)
//Prime Numbers-
// #include<stdio.h>
// int main(){
//     int n;
//     int flag=0;
//     printf("Enter the Number that you want to find whether it is prime or not :");
// scanf("%d",&n);
// for(int i=2;i<=n/2;i++){
    
//     if(n %i==0){
//     flag=1;
//     break;

//     }else{
//         flag=0;
        
//     }
// }
// if(flag==0){
//     printf("%d is Prime Number\n",n);
// }else{
//     printf("%d is not a prime \n",n);
// }
//     return 0;
// }


//Total Number of Prime Numbers till N
// #include<stdio.h>
// int main(){
//     int n,tempNum;
//     int flag=0;
//     int count =0;
//     printf("Enter the Number till we wanna to find prime number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){ 
//        tempNum=i;
//        for(int j=2;j<=tempNum/2;j++){
//         if(tempNum%j==0){
//             flag=0;
//             break;
//         }else{
//             flag=1;
//         }
//        }
//        if(flag==1){
//         printf("%d, ",tempNum);
//          count++;
//        }
//        if(tempNum==2 || tempNum==3){
//         printf("%d ",tempNum);
//         count++;
//        }
//     }
//     printf("The total Prime Numbers till %d is : %d\n",n,count);
//     return 0;
// }

//Q.8)Print_Pattern
//1
//2 3
//3 4 5
//4 5 6 7
// #include<stdio.h>
// int main(){
//     int n=6;
//     int num;
//     int temp=0;
//     for(int i=1;i<=n;i++){
//     //     temp=temp+1;
//     //    num=temp;
//     num=i;
//         for(int j=1;j<=i;j++){
//            printf("%d ",num);
//            num++;
//         }
//         printf("\n");

//     }
//     return 0;
// }

//By Using While Loop-
// #include<stdio.h>
// int main(){
//     int n=6;
//     int i=1;
//     int j=1;
//     int num;
//     while(i<=n){
// num=i;j=1;
//         while(j<=i){
//            printf("%d ",num);
//            num++;
//            j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }


//Q.9)
//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1
//6 5 4 3 2 1
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=6;i++){
//         for(int j=i;j>=1;j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }


//By Using While loop
// #include<stdio.h>
// int main(){
//     int n=6;
//     int i=1;
//     int j;
//     while(i<=n){
//         j=i;
//         while(j>=1){
//            printf("%d ",j);
//            j--;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }


//Q.10)
//A A A
//B B B
//C C C

// #include<stdio.h>
// int main(){
//     char ch='A';
//     int r,c;
//     printf("How Many character you wanna print :");
//     scanf("%d",&r);
//     printf("How Many times in column wise :");
//     scanf("%d",&c);
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//               printf("%c ",ch);

//         }
//         ch++;
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     char ch='A';
//       int r,c,i=1,j=1;
//     printf("How Many character you wanna print :");
//     scanf("%d",&r);
//     printf("How Many times in column wise :");
//     scanf("%d",&c);
//     while(i<=r){
//         j=1;
//         while(j<=c){
//             printf("%c ",ch+i-1);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }


//Q.11)
//A B C
//A B C
//A B C
// #include<stdio.h>

// int main(){
//     char ch='A';
//     int r,c;
// char temp;
//     printf("how many rows :");
//     scanf("%d",&r);
//     printf("how many Cols : ");
//     scanf("%d",&c);
//     for(int i=1;i<=r;i++){
//         temp=ch;
//         for(int j=1;j<=c;j++){
//                   printf("%c ",temp);
//                   temp++;
//         }
//         printf("\n");
//     }
//     return 0;
// }


//By Using While Loop -
// #include<stdio.h>
// int main(){
//       char ch='A';
//     int r,c;
// char temp;
//     printf("how many rows :");
//     scanf("%d",&r);
//     printf("how many Cols : ");
//     scanf("%d",&c);
// int i=1,j=1;
//     while(i<=r){
//         temp=ch;
//         while(j<=c){
//          printf("%c ",temp);
//          temp++;
//          j++;
//         }
//         printf("\n");
//         i++;
//         j=1;
//     }
//     return 0;
// }


//Q.12)
//A B C
//D E F 
//G H I
// #include<stdio.h>
// int main(){
//     int n;
//     char ch='A';
//     printf("Enter the Input :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//            printf("%c ",ch);
//            ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Q.13)
//1 2 3 
//2 3 4
//3 4 5
// #include<stdio.h>
// int main(){
//     int r,val;
//     printf("Enter the number of rows :");
//     scanf("%d",&r);
//     for(int i=1;i<=r;i++){
//         val =i;
//         for(int j=1;j<=3;j++){
// printf("%d ",val);
// val++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//By Using While Loop-
// #include<stdio.h>
// int main(){
//         int r,val;
//     printf("Enter the number of rows :");
//     scanf("%d",&r);
//     int i=1,j=1;
//     while(i<=r){
//         j=1;
//         val=i;
//         while(j<=3){
//          printf("%d ",val);
//          val++;
//          j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }


//Q.14)
//A B C
//B C D
//C D E

// #include<stdio.h>
// int main(){
//     char ch='A';
//     printf("%c ",(ch+3));
//        int r,val;
//     printf("Enter the number of rows :");
//     scanf("%d",&r);
//     for(char i='A';i<=('A'+r-1);i++){
//            ch=i;
//         for(int j=1;j<=3;j++){
//         printf("%c ",ch);
//         ch++;

//         }
//         // printf("%c ",i);
//         printf("\n");

//     }
//     return 0;
// }
// By Using While Loop-
// #include<stdio.h>
// int main(){
//     char i='A';
//     int r,j=1;
//     char ch;
//      printf("Enter the number of rows :");
//     scanf("%d",&r);
//     while(i<=('A'+r-1)){
//         j=1;
//         ch=i;
//         while(j<=3){
//              printf("%c ",ch);
//              ch++;
//              j++;   
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }


//Q.15)
//1 2 3 4 5 5 4 3 2 1
//1 2 3 4 * * 4 3 2 1
//1 2 3 * * * * 3 2 1
//1 2 * * * * * * 2 1
//1 * * * * * * * * 1
// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter the rows :");
//     scanf("%d",&r);
//     int val=0;
    // for(int i=1;i<r;i++){
    //     for(int j=1;j<=r*r;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
// for(int i=r;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         printf("%d ",j);
//     }
//     for(int s=0;s<2*val;s++){
//         printf("* ");
//     }
//     for(int j=i;j>=1;j--){
//         printf("%d ",j);
//     }    return 0;
// }

//     printf("\n");
//     val++;
// }
// int i=r;
// int j=1;
// int s=0;
// while(i>=1){
//     j=1;
//     while(j<=i){
//  printf("%d ",j);
// j++;
//     }
//     s=0;
//     while(s<2*val){
//          printf("* ");
// s++;
//     }
//     j=i;
//     while(j>=1){
//          printf("%d ",j);
//         j--;
//     }
//     i--;
//       printf("\n");
//     val++;
// }
//     return 0;
// }

//Q.16)
//A
//B B
//C C C

// #include<stdio.h>
// int main(){
//     char ch='A';
//     int r;
//     printf("How many rows do you wanna to print :");
//     scanf("%d",&r);
//     for(char i=1;i<=r;i++){
//         for(int j=1;j<=i;j++){
//             printf("%c ",ch);
//         }
//         ch++;
//         printf("\n");
//     }
//     return 0;
// }

//By Using While Loop-
// #include<stdio.h>
// int main(){
// char ch='A';
// int r;
// int i=1,j=1;
// printf("How many rows do you wanna to print :");
//     scanf("%d",&r);
//     while(i<=r){
//         j=1;
//         while(j<=i){
//          printf("%c ",ch);
//          j++;
//         }
//         ch++;
//         printf("\n");
//         i++;
//     }
//     return 0;
// }


//Q.17)
//A
//B C
//D E F
//G H I J

// #include<stdio.h>
// int main(){
//     char ch='A';
//     int r;
//     printf("How many rows do you wanna print :");
//     scanf("%d",&r);
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=i;j++){
//             printf("%c ",ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//By Using While Loop-
// #include<stdio.h>
// int main(){
//     char ch='A';
//     int r;
//     printf("How many rows do you wanna print :");
//     scanf("%d",&r);
//     int i=1,j=1;
//     while(i<=r){
//         j=1;
//         while(j<=i){
//             printf("%c ",ch);
//             ch++;
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
//     return 0;
// }


//Q.18)
//A
//B C
//C D E
//D E F G
// #include<stdio.h>
// int main(){
// char ch='A';
// int r,v=1;
//     printf("How many rows do you wanna print :");
//     scanf("%d",&r);
// for(char i=ch;i<=('A'+r-1);i++){
//     ch=i;
//     for(int j=1;j<=v;j++){
//         printf("%c ",ch);
//         ch++;
//     }
//     printf("\n");
//     v++;
    
// }
// return 0;
// }


// //By using While Loop-
// #include<stdio.h>
// int main(){
//     char ch='A';
//     int r,j=1;
//     int v=1;
//     char i='A';
//       printf("How many rows do you wanna print :");
//     scanf("%d",&r); 
//     while(i<='A'+r-1){
//         ch=i;
//         j=1;
//         while(j<=v){
//             printf("%c ",ch);
//             ch++;
//             j++;
//         }
//         v++;
//         printf("\n");
//         i++;
//     }
//     return 0;
// }


//Q.19)
//D
//C D
//B C D
//A B C D
// #include<stdio.h>
// int main(){
//     int r,v=1;
//     printf("How many rows do you wanna print :");
//     scanf("%d",&r);
//     char ch='A'+r-1;
//     for(char i=ch;i>='A';i--){
//               ch=i;
//         for(int j=1;j<=v;j++){
//           printf("%c ",ch);
//           ch++;

//         }
//         v++;
//         printf("\n");
//     }
//     return 0;
// }
//By Using While Loop-
// #include<stdio.h>
// int main(){
//     int r,j=1,v=1;
     
    
//       printf("How many rows do you wanna print :");
//     scanf("%d",&r);
//     char ch='A'+r-1;
//     char i=ch;
//     while(i>='A'){
//         ch=i;
//         j=1;
//         while(j<=v){
//             printf("%c ",ch);
//             ch++;
//             j++;
//         }
//         v++;
//         printf("\n");
//         i--;
//     }
//     return 0;
// }



//Q.20)
//_ _ _ *
//_ _ * *
//_ * * *
//* * * *
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int s=3;s>=i;s--){
//             printf("_ ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//By Using While Loop-
// #include<stdio.h>
// int main(){
//     int i=1;
//     int j=1;
//     int s=3;
//     while(i<=4){
//         s=3;
//         while(s>=i){
//           printf("_ ");
//             s--;
//         }
//         j=1;
//         while(j<=i){
//             printf("* ");
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
// }


//Q.21)
//* * * *
//* * *
//* *
//*
// #include<stdio.h>
// int main(){
//     for(int i=4;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//BY Using While Loop-
// #include<stdio.h>
// int main(){
//     int i=4;
//     int j=1;
//     while(i>=1){
//         j=1;
//         while(j<=i){
//             printf("* ");
//             j++;
//         }
//         i--;
//         printf("\n");
//     }
//     return 0;
// }


//Q.22)
//* * * *
//_ * * *
//_ _ * *
//_ _ _ *

// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter how many rows you Wanna print :");
//     scanf("%d",&r);
//     for(int i=r;i>=1;i--){
//        for(int s=i;s<r;s++){
//                  printf("_ ");
//        }
//        for(int j=1;j<=i;j++){
//         printf("* ");
//        }
//        printf("\n");
//     }
//     return 0;
// }

//BY Using While Loop-
// #include<stdio.h>
// int main(){
//       int r;
//     printf("Enter how many rows you Wanna print :");
//     scanf("%d",&r);
//   int i=r;
//   int j=1;
//   int s;
//   while(i>=1){
// s=i;
//     while(s<r){
//         printf("_ ");
//         s++;
//     }
//     j=1;
//     while(j<=i){
//     printf("* ");
//     j++;
//     }
//     i--;
//     printf("\n");
//   }
//     return 0;
// }

//Q.23)
//1 1 1 1
//_ 2 2 2
//_ _ 3 3
//_ _ _ 4
// #include<stdio.h>
// int main(){
//       int r;
//     printf("Enter how many rows you Wanna print :");
//     scanf("%d",&r);
//     for(int i=1;i<=r;i++){
//         for(int s=1;s<i;s++){
//             printf("_ ");
//         }
//         for(int j=i;j<=r;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//BY Using While Loop-
// #include<stdio.h>
// int main(){
//       int r;
//     printf("Enter how many rows you Wanna print :");
//     scanf("%d",&r);
//    int i=1;
//    int j,s;
//    while(i<=r){
//     s=1;
//    while(s<i){
//     printf("_ ");
//     s++;
//    }
//    j=i;
//    while(j<=r){
// printf("%d ",i);
// j++;
//    }
//     i++;
//     printf("\n");
//    }
//     return 0;
// }


//Q.24)
//- - - 1
//- - 2 2
//- 3 3 3
//4 4 4 4

// #include<stdio.h>
// int main(){

//     for(int i=1;i<=4;i++){
//     for(int s=3;s>=i;s--){
//         printf("- ");
//     }  
//     for(int j=1;j<=i;j++){
//         printf("%d ",i);
//     }
//     printf("\n");

//     }  
//       return 0;
// }


//By Using WHile Loop-
// #include<stdio.h>
// int main(){
//     int i=1;
//     int s=3;
//     int j;
//     while(i<=4){
//         s=3;
// while(s>=i){
//     printf("- ");
//     s--;
// }
// j=1;
// while(j<=i){
// printf("%d ",i);
// j++;
// }
//         i++;
//         printf("\n");
//     }
//     return 0;
// }

//Q.25)
//1 2 3 4
//_ 2 3 4
//_ _ 3 4 
//_ _ _ 4
// #include<stdio.h>
// int main(){
//       int r;
//     printf("Enter how many rows you Wanna print :");
//     scanf("%d",&r);
//     for(int i=1;i<=r;i++){
//         for(int s=1;s<i;s++){
//             printf("_ ");
//         }
//         for(int j=i;j<=r;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//BY using While Loop-
// #include<stdio.h>
// int main(){
//       int r;
//     printf("Enter how many rows you Wanna print :");
//     scanf("%d",&r);
//     int i=1;
//     int j;
//     int s=1;
//     while(i<=r){
// s=1;
//         while(s<i){
//            printf("_ ");
//            s++;
//         }
//         j=i;
//         while(j<=r){
//             printf("%d ",j);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }

//Q.26)
//- - - 1
//- - 2 3
//- 4 5 6
//7 8 9 10
// #include<stdio.h>
// int main(){
//     int num=1;
//     for(int i=1;i<=4;i++){
//         for(int s=3;s>=i;s--){
//             printf("_ ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d ",num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//BY Using While Loop-
// #include<stdio.h>
// int main(){
//     int s,i,j;
//     i=1;
//     int num=1;
//     while(i<=4){
//         s=3;
//         while(s>=i){
//             printf("_ ");
//             s--;
//         }
//         j=1;
//         while(j<=i){
//            printf("%d ",num);
//            num++;
//            j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }



//Q.27)
//_ _ _ 1
//_ _ 1 2 1
//_ 1 2 3 2 1
//1 2 3 4 3 2 1
// #include<stdio.h>
// int main(){
//     int temp,j;
//     for(int i=1;i<=4;i++){
//         for(int s=3;s>=i;s--){
//             printf("_ ");

//         }
//         for(j=1;j<=i;j++){
//             printf("%d ",j);
//         }
// temp=j-2;
// for(int t=temp;t>=1;t--){
//     printf("%d ",t);
// }
// printf("\n");


//     }
//     return 0;
// }


//BY Using While Loop-
// #include<stdio.h>
// int main(){
//     int i,j,s,temp,t;
//     i=1;
//     while(i<=4){
//         s=3;
//         while(s>=i){
//             printf("_ ");
//             s--;
//         }
//         j=1;
//         while(j<=i){
//             printf("%d ",j);
//             j++;
//         }
//         temp=j-2;
//         while(temp>=1){
//             printf("%d ",temp);
//             temp--;
//         }
//         i++;
//         printf("\n");
//     }
//     return 0;
// }

//Q.28)
//* * * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * *
//        *

// #include<stdio.h>
// int main(){
//     int s=9;
//     for(int i=1;i<=5;i++){
//         for(int s=1;s<i;s++){
//            printf(" ");
//         }
//         for(int j=s;j>=1;j--){
//            printf("*");
//         }
//         s=s-2;
//         printf("\n");
//     }
//     return 0;
// }

//Q.29)
// palindrome with string-
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[40];
//     int k=0;
//     printf("Enter the string :");
// //    do{
// //        scanf("%c",&ch[k]);
// //        k++;
// //    }while(ch[k]!='\n');
// scanf("%s",ch);
//     char str[40];
//     int j=0;
//     int flag=0;
//     // printf("%ld",strlen(ch));
//     // for(int i=0;i<strlen(ch);i++){
//     // printf("%c ",ch[i]);
//     // }
//     for(int i=strlen(ch)-1;i>=0;i--){
//         str[j]=ch[i];
//         j++;
//     }
//     for(int i=0;i<strlen(ch);i++){
//         flag=0;
//         if(str[i]==ch[i]){
//             flag=1;
//         }else{
//             flag=0;
//             break;
//         }
//     }
//     if(flag==1){
//         printf("Palindrome are matched\n");
//     }else{
//         printf("Palindrome are not matched\n");
//     }
//     return 0;
// }


//direct check-

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[50];
//     int flag=0;
//     printf("Enter the string :");
//     scanf("%s",ch);
//     int len =strlen(ch);
//     // str=strrev(ch);
//     // if(strcmp(ch,str)==0){
//     //     flag=1;
//     // }else{
//     //     flag=0;
//     // }
//     printf("%d",len);
//     for(int i=0;i<len;i++){
//         flag=0;
//         if(ch[i]!=ch[len-1-i]){
//             flag=0;
//             break;
//         }else{
//             flag=1;
//         }
//     }
//     if(flag==1){
//         printf("Palindome matched");
//     }else{
//         printf("Palindrome not match");
//     }
//     return 0;
// }

//make palindrome program that accept space as well






//Q.30)
//remove duplicate elements from an array-

// #include<stdio.h>
// int main(){

// int size;
// printf("Enter the size of the array :");
// scanf("%d",&size);
// int arr[size];
// for(int i=0;i<size;i++){
//     scanf("%d",&arr[i]);

// }
// int tempsize=size;
// for(int i=0;i<size;i++){
//     for(int j=i+1;j<size;j++){
//              if(arr[i]==arr[j]){
//                 for(int k=j;k<size-1;k++){
//                     arr[k]=arr[k+1];
//                 }
//                 size=size-1;
//                 j=j-1;
//              }
//     }
// }
// printf("After removing duplicate elements array is :");
// for(int i=0;i<size;i++){
//     printf("%d ",arr[i]);
// }
//     return 0;
// }


//Q.31)
//In an array find sum is even or odd and then count it
// #include<stdio.h>
// int main(){
//     int arr[]={6,8,1,2,3,2,1,2,8};
//     int size=sizeof(arr)/sizeof(int);
//     int sum=0;
//     int counteven=0;
//     int countodd=0;
//     for(int i=0;i<size-1;i++){
//       sum=arr[i]+arr[i+1];
//       printf("%d ",sum);
//       if(sum%2==0){
//         counteven++;
//       }else{
//         countodd++;
//       }
//       sum=0;
//     }
//     printf("\nThe number of even sum = %d \nThe number of odd sum = %d\n",counteven,countodd);

//     return 0;
// }


//Q.32)
//In an array find the pairs whose sum is even
// #include<stdio.h>
// int main(){
//     int arr[]={2,4,3,1,2,34,4};
//     int sum=0;
//     int size = sizeof(arr)/sizeof(int);
//    for(int i=0;i<size-1;i++){
//       for(int j=i+1;j<size;j++){
//            sum=arr[i]+arr[j];
//            if(sum%2==0){
//             printf("Pair is :(%d,%d)\n",arr[i],arr[j]);
//            }else{

//            }
//            sum=0;
//       }
//    }
//     return 0;
// }


//Q.33)
//No.of Occurence of a character in a string-

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[50];
// printf("Enter the Input :");
// scanf("%s",ch);
// char character;
// printf("Enter the character that you wanna to search in Input String :");
// scanf(" %c",&character);
// int count =0;
// for(int i=0;i<strlen(ch);i++){
//     if(ch[i]==character){
//         count++;
//     }
// }
// printf("The No. of Occurence of a character [%c] in Input String is : %d",character,count);
//     return 0;
// }


//Q.34) Write a code to reverse a number

// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter the Number :");
//     scanf("%d",&number);
//     int temp=number;
//     int length=0;
//     while(temp>0){
//        temp=temp/10;
//        length++;
//     }
//     int arr[length];
//     int i=0;
//     while(number>0){
//         arr[i]=number%10;
//         number=number/10;
//         i++;
//     }
   
//     printf("The reversed number is :");
//     for(int i=0;i<length;i++){
//       printf("%d",arr[i]);
//     }
    
// }



//Q.35) Write code of Greatest Common Divisor

#include<stdio.h>
int main(){
    int arr[50];
    int n;
    printf("How Many Numbers do you Wanna to enter :");
    scanf("%d",&n);
    printf("Enter the elements of which you want GCD -\n");
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
            }
        }
    }
    printf("After Sorting Our elements are :");
     for(int i=0;i<n;i++){
        prinf("%d",arr[i]);
    }
    int hcf=1;
    int flag=0;

    int minnumber=arr[0];
    while(flag==0){
  for(int i=0;i<n;i++){
     if(minnumber%arr[i]==0){
        flag=1;
     }else{
        flag=0;
        break;
     }
  }
  if(flag==1){
    hcf=hcf*minnumber;
  }

    }

    return 0;
}