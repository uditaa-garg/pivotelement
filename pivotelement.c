//the array used here is rotated sorted array

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *arr,n;
    printf("enter the no of elements: ");
    scanf("%d",&n);

    arr =(int*)malloc(n*sizeof(int));
    printf("enter the elemnts: ");
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }

  

    int start = 0;
    int end = n-1;
    int mid = start+ (end-start)/2;

    while(start<end){

       

        if(arr[mid]>=arr[0]){
         start = mid+1;

        }

        else{
         end = mid;

        }
      
      mid = start+ (end-start)/2;

    }

  printf("%d",arr[start]);



 
}