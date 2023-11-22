
#include<iostream>
using namespace std;

void rotateArr(int arr[], int d, int n){
    // code here
     int newarr[d];
        int k=0,in=0;
        int rem;
        if(d<n){
            rem=d;
        }
        else{
            rem=d%n;
        }
        for(int i=0;i<rem;i++){
            newarr[i]=arr[i];
        }
        for(int i=rem;i<n;i++){
            arr[k]=arr[i];
            k++;
        }
        for(int i=k;i<n;i++){
            arr[i]=newarr[in];
            in++;
        }
}
int main(){
    int arr[]={1,2,3,4,5};
    int d;
    cout<<"enter d :";
    cin>>d;
    int n=sizeof(arr)/sizeof(arr[0]);
rotateArr(arr,d,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}