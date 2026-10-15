// #include<stdio.h>
// int main(){
//     int marks[2][3];
//     marks[0][0]=90;
//     marks[0][1]=80;
//     marks[0][2]=70;

//     marks[1][0]=90;
//     marks[1][0]=90;
//     marks[1][0]=90;
//     printf("%d",marks[0][0]);
//     // return;
    
    

// }
#include<stdio.h>
int countOdd(int arr[],int n);
int main(){
int arr[]={1,2,3,4,5,6};
printf("%d\n", countOdd(arr,6));
    return 0;
}
int countOdd(int arr[],int n){
   int count=0;
   for(int i=0; i<n; i++){
    if(arr[i]%2!=0){
        count++;
    }
   }
   return count;
}