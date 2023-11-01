//Q.1) Find Most Repeated Character in a string in O(n) time-

// #include<iostream>
// #include<iomanip>
// #include<string.h>
// using namespace std;
// char maxchar(char ch[]){
//     int arr[26]={0};
//     int count=-1;
//     char freq;
//     for(int i=0;i<strlen(ch);i++){
//         arr[ch[i]-'a']++;
//     }
//     for(int i=0;i<26;i++){
//         if(count<arr[i]){
//             count=arr[i];
//             freq='a'+i;
//         }else{

//         }
//     }
//     for(int i=0;i<26;i++){
//         cout<<arr[i]<<" ";
//     }
//     return freq;
// }

// int main(){
// char ch[40];
// // string ch;
//    cout<<"Enter the String :";
   
// //    cin>>ch;
// scanf("%[^\n]s",ch);
// // for(int i=0;i<strlen(ch);i++)
// //   {
// // //     cout<<ch[i];
// // if()
// //  } 
// char max=maxchar(ch);
// cout<<"Maximum character is :"<<max;
//    return 0;
// }

//Q.2)Triplet Sum
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the size of array :";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int k;
//     int flag=0;
//     cout<<"Enter the value of K :";
//     cin>>k;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             for(int s=j+1;s<size;s++){
//                    if(arr[i]+arr[j]+arr[s]==k){
//                   flag=1;
//                     printf("The Triplet is : %d %d %d\n",arr[i],arr[j],arr[s]);
//                    }else{

//                    }
//             }
//         }
//     }
//     if(flag==0){
//         cout<<"No Triplet Exists";
//     }
//     return 0;
// }



//Q.3) Find the Unique Occurence-
/*
Ex- 1,2,1,2,3,1
here-     1 repeat=3--
          2 repeat=2--       so these three are unique so return true;
          3 repeat=1--

*/

// #include<iostream>
// using namespace std;
// bool uniqueOccurence(int size,int arr[]){
//     int freq[30];
// int count=1;
// bool var;
// int flag=0;
//  for(int i=0;i<size;i++){
//            count=1;
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                count++;
//                for(int k=j;k<size-1;k++){
//                 arr[k]=arr[k+1];
//                }
//                size--;
//                j--;
//             }
//         }
//         freq[i]=count;
//     }
//      for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<size;i++){
//         cout<<freq[i]<<" ";
//     }
//     for(int i=0;i<size;i++){
//         flag=0;
//         for(int j=i+1;j<size;j++){
//             if(freq[i]==freq[j]){
//                 flag=1;
//                break;
//             }
//         }
//         if(flag==1){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int size;
//     cout<<"Enter the size of the array :";
//     cin>>size;
//     int arr[size];

//     cout<<"Enter the elements -"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//    bool result=uniqueOccurence(size,arr);
//    if(result==1){
//      cout<<"The result of Unique Occurence is : True"<<endl;
//    }else{
//    cout<<"The result of Unique Occurence is : False"<<endl;
//    }
//    return 0;
// }


//Q.4) Find the Minimum Element i.e. pivot

// #include<iostream>
// using namespace std;

// int main(){
//  int size;
//  cout<<"Enter the Size of Array :";
//  cin>>size;
//  int arr[size];
//  cout<<"Enter the elements of the Array :"<<endl;
//  for(int i=0;i<size;i++){
//     cin>>arr[i];
//  }
//  int min= INT16_MAX;
// for(int i=0;i<size;i++){
//     if(arr[i]<min){
//         min=arr[i];
//     }
// }
// cout<<"The Pivot Element in Given Array is :"<<min<<endl;
//     return 0;
// }


//Q.4)Find Peak Index in Mountain Array -
//Ex- 0 1 0
//output- 1

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter size :";
//     cin>>size;
//     int arr[size];
//     cout<<"Enter Elements :#include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter size :";
//     cin>>size;
//     int arr[size];
//     cout<<"Enter Elements :"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int max=INT16_MIN;
//     int index;
//     for(int i=0;i<size;i++){
//         if(max<arr[i]){
//             max=arr[i];
//             index=i;
//         }
//     }
//     cout<<"The Peak Element is :"<<max<<" at index is :"<<index<<endl;
//     return 0;
// }
//     cout<<"The Peak Element is :"<<max<<" at index is :"<<index<<endl;
//     return 0;
// }


//Q.5)Find the Number ki First and last Occurence
/*
Ex =>   1 2 3 3 5
first occurence of 3 is => 2 index
last occurence of 3 is => 3 index
*/

// #include<iostream>

// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter Size :";
//     cin>>size;
//     int arr[size];
//     cout<<"Enter Elements :"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int element;
//     cout<<"Enter Element to Search :";
//     cin>>element;
//     int ele_firstocc_index=-1;//element first occurence index
//     int ele_secocc_index=-1;  //element second occurence index
// int i=0;
// int j=size-1;
// while(i<size){
// if(arr[i]==element){
//     ele_firstocc_index=i;
// break;
// }else{
//     i++;
// }

// }


// while(j>=0){
// if(arr[j]==element){
//     ele_secocc_index=j;
//       break;
// }else{
//     j--;
// }

// }
// cout<<"The First Occurence Of Element is :"<<ele_firstocc_index<<"  Last Occurence of Element :"<<ele_secocc_index<<endl;

//     return 0;
// }



//Q.6) Do Sorted Binary Array => 0 1 0 0 1

// #include<iostream>

// using namespace std;
// int main(){
//     int size;
//     int temp;
//     cout<<"Enter size :";
//     cin>>size;
//     int arr[size];
//     cout<<"Enter elements in binary digits :";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                    temp=arr[j];
//                    arr[j]=arr[j+1];
//                    arr[j+1]=temp;
//             }
//         }
//     }
//     cout<<"Sorted Binary Array - "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



//Q.7)Find Common element in arrays i.e. Intersection

#include<iostream>
using namespace std;

int main(){
int size1,size2;
cout<<"Enter size1 :";
cin>>size1;

int arr1[size1];

int k=0;
int newarr[size1];

for(int i=0;i<size1;i++){
    cin>>arr1[i];
}
cout<<"Enter size2 :";
cin>>size2;
int arr2[size2];
for(int i=0;i<size2;i++){
    cin>>arr2[i];
}
for(int i=0;i<size1;i++){
    for(int j=0;j<size2;j++){
        if(arr1[i]==arr2[j]){
            newarr[k]=arr1[i];
            k++;
        }
    }
}
cout<<"In two Arrays the Common elements are :{ ";
for(int i=0;i<k;i++){
    cout<<newarr[i]<<", ";
}
cout<<"}"<<endl;
    return 0;
}