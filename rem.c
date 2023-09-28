// #include<stdio.h>
// #include<math.h>
// int main(){
//     printf("%lf",fmod(12.6,2.2));
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main ()
// {
//   printf ("fmod of 3.14/2.1 is" );
//   return 0;
// }



// #include<stdio.h>
// int main()
// {
//     display();
//     return 0;
// }
// void display()
// {
//     printf("IndiaBIX.com");
// }



// #include<stdio.h>
// int main()
// {
//     float a=0.7;
//     if(a < 0.7)
//         printf("C\n");
//     else
//         printf("C++\n");
//     return 0;
// }



// #include<stdio.h>
// int main ()
// {
// int arr[2][3]={5, 10, 15, 20, 25, 30};
// int (*ptr) [2][3]=&arr;
// printf ("%d\t", ***ptr) ;
// printf ("%d\t", ***(ptr+1)) ;
// printf ("%d\t", **(*ptr+1)) ;
// printf ("%d\t", *(*(*ptr+1)+2)) ;
// return 0;
// }



// #include<stdio.h>

// int main()
// {
//     char *str;
//     str = "%s";
//     printf(str, "K\n");
//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int arr[3] = {2, 3, 4};
//     char *p;
//     p = arr;
//     p = (char*)((int*)(p));
//     printf("%d, ", *p);
//     p = (int*)(p+1);
//     printf("%d", *p);
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     int i, n;
//     char *x="Alice";
//     n = strlen(x);
//     *x = x[n];
//     for(i=0; i<=n; i++)
//     {
//         printf("%s ", x);
//         x++;
//     }
//     printf("\n"nnnnnnnnnnnnnnnnnnnnnnnnnn);
//     return 0;
// }



#include<stdio.h>
#include<string.h>
void func(char sh[]){
for(int i=0;i<strlen(sh);i++){
if(sh[i]=='A'||sh[i]=='E'||sh[i]=='O'||sh[i]=='U' || sh[i]=='I'|| sh[i]=="[%^\n][0-9]"){

}else{
    printf("%c",sh[i]);
}
    }
}
int main(){
    char sh[]="ABCdfghjkl12";
    
    func(sh);
    return 0;

}