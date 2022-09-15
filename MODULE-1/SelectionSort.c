// Algorithm: step 1: select the first element of the list.
//            step 2: compare the next element (i+1).
//            step 3: if the next element is smaller thent current element the swap.
//            step 4: repeate the steps untill you get the array sorted.


#include<stdio.h>

void selectsort(int arr[],int n) {
        int i,j;

        for(i = 0; i<n-1; i++) {
                for(j = i+1;j<n;j++) {
                        if(arr[i]>arr[j]) {
                                int temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                        }
                }
        }
}

void printarray(int arr[],int n) {
        int i;
        for(i = 0;i<n;i++) {
                printf("%d",arr[i]);
        printf("\n");
}


int main() {
        int arr[] = {75,23,45,78,98,54};
        int n = sizeof(arr)/sizeof(arr[0]);
        selectionsort(arr,n);
        printarray(arr, n);
        return 0;
}
~        

#include<stdio.h>

void selectsort(int arr[],int n) {
        int i,j;

        for(i = 0; i<n-1; i++) {
                for(j = i+1;j<n;j++) {
                        if(arr[i]>arr[j]) {
                                int temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                        }
                }
        }
}

void printarray(int arr[],int n) {
        int i;
        for(i = 0;i<n;i++) {
                printf("%d",arr[i]);
        printf("\n");
}


int main() {
        int arr[] = {75,23,45,78,98,54};
        int n = sizeof(arr)/sizeof(arr[0]);
        selectsort(arr,n);
        printarray(arr, n);
        return 0;
}
