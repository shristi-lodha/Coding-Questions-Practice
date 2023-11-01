//Q.1) Write code of Greatest Common Divisor

#include<stdio.h>
int main(){
    int arr[50];
    int n;
    printf("How Many Numbers do you Wanna to enter :");
    scanf("%d",&n);
    printf("Enter the elements of which you want GCD -\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
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
    int rem[n];
    printf("After Sorting Our elements are :");
     for(int i=0;i<n;i++){
        printf("%d",arr[i]);
rem[i]=1;
    }
    int hcf=1;
    int flag=0;

//     int minnumber=arr[0];
//     while(flag==0){
//   for(int i=0;i<n;i++){
//      if(minnumber%arr[i]==0){
//         flag=1;
//      }else{
//         flag=0;
//         break;
//      }
//   }
//   if(flag==1){
//     hcf=hcf*minnumber;
//   }

//     }

for(int i=0;i<n;i++){
    for(int j=1;j<arr[i];j++){
       if(arr[i]%j==0){
       rem[i]*=j;
    }
    }
}
printf("rem ");
for(int i=0;i<n;i++){
    printf("%d ",rem[i]);
}
int maxpro=1;
for(int i=0;i<n;i++){
    maxpro*=rem[i];
}
printf("\n%d ",maxpro);
for(int i=2;i<=arr[0];i++){
flag=0;
    // for(int j=0;j<n;j++){
    //     if(rem[j]%i==0){
    //         flag=1;
    //     }else{
    //         flag=0;
    //         break;
    //     }
    // }

    for(int j=0;j<n;j++){
        if(arr[j]%i==0){
            flag=1;
        }else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("GCD of these number is %d ",i);
        break;
    }
}
    return 0;
}