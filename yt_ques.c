//Q.1) take input number and then convert to binary then complement and then convert it to decimal
// #include<stdio.h>

// int Pow(int n,int b){
//     if(b!=0){
//         return n*Pow(n,b-1);

//     }else{
//         return 1;
//     }
// }

// int main(){
//     int n;
// printf("Enter number in decimal :");
// scanf("%d",&n);
// int temparr[40];
// int index=0;
// //Now converting Decimal to Binary -
// while(n>=1){
//     temparr[index]=n%2;
//     n=n/2;
//     index++;
// }
// int arr[40];
// int last=index-1;
// int decsum=0;
// int j=0;
// for(int i=0;i<index;i++){
//     arr[i]=temparr[last];
//     last--;
// }
// for(int i=0;i<index;i++){
//     if(arr[i]==1){
//         arr[i]=0;
//     }else{
//         arr[i]=1;
//     }
// }
// for(int i=index-1;i>=0;i--){
// decsum+=arr[i]*(Pow(2,j));
// j++;
// }
// printf("After Complementing the decimal number is :%d",decsum);
//     return 0;
// }


//Q.2) Find total Set Bits in two Input-
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two Input :");
    scanf("%d %d",&a,&b);
    int temparr1[40],temparr2[40];
    int index1=0;
    int index2=0;
    
    while(a>=1){
       temparr1[index1]=a%2;
    a=a/2;
    index1++;
    }
    int last1=index1-1;
    while(b>=1){
       temparr2[index2]=b%2;
    b=b/2;
    index2++;
    }
    int last2=index2-1;
    int arr1[40],arr2[40];
for(int i=0;i<index1;i++){
    arr1[i]=temparr1[last1];
    last1--;
}
for(int i=0;i<index2;i++){
    arr2[i]=temparr2[last2];
    last2--;
}
int m,n=0;
int count=0;
while(m<index1 || n<index2){
    if(arr1[m]==1){
count++;

    }else {

    }
    if(arr2[n]==1){
        count++;
    }else{
        
    }
    m++;
    n++;
}
printf("The Number of Set Bits are :%d",count);
    return 0;
}