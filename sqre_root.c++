#include<iostream>
using namespace std;
int sqre_root(int n){
    int s=0;
    int e=n;
    int mid;
    while(s<=e){
      mid=(s+e)/2;
      if(mid*mid==n){
        return mid;
      }else if(mid *mid>n){
        e=mid-1;
      }else{
        s=mid+1;
      }
    }
    return -1;
}
int main(){
    int number;
    cout<<"Enter the Number :";
    cin>>number;
int result=sqre_root(number);
cout<<"The Square Root of "<<number<<" is :"<<result<<endl;
    return 0;
}