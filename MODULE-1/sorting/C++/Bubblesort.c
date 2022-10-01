//algorithm for bubblesort : the main logic is to compare each and every element and if a>b then swap
 

#include<stdio.h>

void bubblesort(int arr[],int n) {
    int i,j;
    for(i = 0;i<n;i++) {
        for(j = 0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printarray(int arr[],int size) {
    int i;
    for(i=0;i<size;i++) {
        printf("%d",arr[i]);
    printf("\n");
    }
}

int main() {
    int arr[6] = {22,23,10,43,25,21};
    int N = sizeof(arr) / sizeof(arr[0]);
    //call the user defined funtion
    bubblesort(arr,N);

    //to print we already made a user defined function

    //now call that

    printarray(arr,N);
    return 0;
}
