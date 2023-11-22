#include<iostream>
using namespace std;
int main(){
    int size;
    
    int arr[50];
    int index=0;
    char c;
    while(index<50){
      scanf("%d%c",&arr[index],&c);//that why we use this
    // cin>>arr[index]>>c;//cin skips blank spaces and endline characters. That’s why you are not getting the result you are looking for.
      index++;
      if(c=='\n'){
        break;
      }
    }
    int a=sizeof(arr)/sizeof(arr[0]);
    // cout<<a;
    for(int i=index-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}