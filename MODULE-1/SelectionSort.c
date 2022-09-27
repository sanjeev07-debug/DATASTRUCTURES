//algorithm  : now for selection sort the smaller element will go to the low index position
#include<stdio.h>

void select(int arr[],int n) {
    int i,j;
    for(i = 0;i<n;i++) {
        for(j =i+1;j<n;j++) {
            if(arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//to print the array

void printarray(int arr[],int size) {
    int i;
    for(i = 0;i<size;i++) {
        printf("%d",arr[i]);
    printf("\n");
    }
}
int main() {
    int arr[6] = {3,2,4,1,9,5};
    int N = sizeof(arr) /sizeof(arr[0]);
    select(arr,N);
    //for printing the array

    printarray(arr,N);
    return 0;
}

