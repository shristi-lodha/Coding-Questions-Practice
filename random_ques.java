//1. How do you reverse a string in Java?
// 5. Write a Java program to print a Fibonacci sequence using recursion.
// 7. How do you check whether a string is a palindrome in Java?
// 8. How do you remove spaces from a string in Java?
// 12. How can you find the factorial of an integer in Java?

// 14. How do you implement a binary search in Java?
// 17. Write Java program that checks if two arrays contain the same elements.
// 19. How do you find the second largest number in an array in Java?
import java.util.Scanner;
import java.util.Arrays;   
public class Main
{
    
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
System.out.println("Enter the size of array-\n");
		int len=sc.nextInt();
		int []arr=new int[len];
		for(int i=0;i<len;i++){
		    arr[i]=sc.nextInt();
		}
		int max=0;
		int secmax=0;
		for(int i=0;i<len;i++){
		    if(max<arr[i]){
		        secmax=max;
		        max=arr[i];
		    }else{
		        if(arr[i]!=max && arr[i]>secmax){
		            secmax=arr[i];
		        }
		    }
		}
		System.out.printf("Second Largest element is %d",secmax);
	}	
}
// 		int [] arr1={1,2,3,45,34};
// 		int [] arr2={1,45,67,2,3};
// 		int [] arr3={1,3,4,8,5};
// 		int len1=arr1.length;
// 		int len2=arr2.length;
// 		int len3=arr3.length;
// 		boolean value1=samearray(arr1,arr2,len1,len2);
//     boolean value2=	samearray(arr2,arr3,len2,len3);
// 	boolean value3=	samearray(arr1,arr3,len1,len3);
// 	System.out.printf("%s %s %s",value1,value2,value3);
	    
// 	}
// 	public static boolean samearray(int arr1[],int arr2[],int len1,int len2)
// {
//     int flag=0;
//     if(len1<=len2){
//         for(int i=0;i<len1;i++){
//             flag=0;
//             for(int j=0;j<len2;j++){
//                 if(arr1[i]==arr2[j]){
//                   flag=1; 
//                 }
//             }
//             if(flag==0){
//                 return false;
//             }
//         }
//         return true;
//     }else{
//           for(int i=0;i<len2;i++){
//             flag=0;
//             for(int j=0;j<len1;j++){
//                 if(arr2[i]==arr1[j]){
//                   flag=1; 
//                 }
//             }
//             if(flag==0){
//                 return false;
//             }
//         }
//         return true;
//     }

        // String s= sc.nextLine();
    //     System.out.println("Enter the length of array :");
    //     int len=sc.nextInt();
    //     int []arr=new int[len];
    //     for(int i=0;i<len;i++){
    //         arr[i]=sc.nextInt();
    //     }
    //     System.out.println("Enter the element that you wannna to search in array :");
    //     int element=sc.nextInt();
    //     Arrays.sort(arr);
    //  int index=   binarysearch(arr,element);
    //  System.out.println("The element is found at index :"+index);
    //   int result=  fact(n);
    //     System.out.printf("The factorial of %d is : %d",n,result);
//         char[] str=new char[s.length()];
//         for(int i=0;i<s.length();i++){
//             str[i]=s.charAt(i);
//         }
//         int j=s.length()-1;
//         int flag=0;
//         for(int i=0;i<s.length()/2;i++){
//             flag=0;
//             if(str[i]==str[j]){
//                 flag=1;
                
//             }else{
//                 flag=0;
//                 break;
//             }
//             j--;
            
//         }
//   if(flag==0){
//       System.out.println("String is not a Palindrome");
//   }        else{
//       System.out.println("String is a Palindrome");
//   }
// 	}
// 	public static int binarysearch(int arr[],int ele){
// 	int len=arr.length;
// 	int low=0;
// 	int high=len-1;
// 	int mid;
// 	while(low<high){
// 	    mid=(low+high)/2;
// 	    if(arr[mid]==ele){
// 	        return mid;
// 	    }else if(arr[mid]<ele){
// 	        low=mid+1;
// 	    }else{
// 	        high=mid-1;
// 	    }
// 	}
// 	   return -1; 
// 	}

