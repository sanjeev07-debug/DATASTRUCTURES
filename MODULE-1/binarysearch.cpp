//algorithm for binary search 
//step 1 : initialize the low,mid and high values 
//step 2 : now if key == array of the mid then then return mid value
//step 3 : if val is greater then low is mid + 1
//step 4 : if the value is less then mid - 1

//code

#include<stdio.h>

int binary(int arr[],int key,int low,int high) {
    int mid = low + (high - low) / 2;

    if(key==arr[mid]) {
        return mid;
    }
    if(key > arr[mid]) {
        return binary(arr,key,mid + 1,high);
    }
    if(key < arr[mid]) {
        return binary(arr,key,low,mid - 1);
    }
    else {
        return -1;
    }
}

// to print
int main() {
    int arr[6] = {2,3,4,5,6,7};
    int key = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binary(arr,key,0,n-1);   //here low of any array in the world is zero but for high we need to 
                                         //manually assign the size
    if(result == -1) {
        printf("error your code is hacked");
    }
    else {
        printf("the index position of the key is %d",result);
    }
    return 0;
}
