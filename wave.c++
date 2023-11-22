#include<iostream>
using namespace std;
int main(){
int rows=3;
int n;
cout<<"Enter Number :";
cin>>n;
float col=n/3.0;
int temp= col;
cout<<temp;
cout<<col;
if(temp!=col){
col=col+1;
}
int j=0,num=1;
int cols=col;
int arr[rows][cols];
int iteration=1;
cout<<"cols are :"<<cols<<endl;
for(int i=0;i<cols;i++){
   
   if(iteration%2!=0){
    j=0;
   while(j<rows){
   if(num<=n){
arr[j][i]=num;
   }else{
    arr[j][i]=0;
   
   }
j++;
num++;
    }
   }else{
    j=j-1;
    while(j>=0){
        // cout<<num;
        // cout<<j;
         if(num<=n){
   arr[j][i]=num;
         }else{
            arr[j][i]=0;
            
         }
      num++;
        j--;
    }
   }
    iteration++;
    
}

cout<<"Numbers In wave Format :"<<endl;
for(int i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}