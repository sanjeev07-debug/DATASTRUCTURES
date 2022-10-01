//algorithm step 1: delare variable like pivot,i,j;
//step 2 : now take the first index as pivot and i , last as j
//step 3: then incremennt the i value until arr[i] > pivot and j decrement the value
            //until the you get arr[j] < pivot
//step 4 : now if i < j then exchange
//step 5 : else j < i then exchange with pivot
//step 6 : repeat the process

//code

#include<stdio.h>
// #include<iostream>
// using namespace std;
void quicksort(int arr[],int first,int last) {
    int pivot,i,j,temp;

    if(first<last) {
        pivot = first;
        i = first;
        j = last;
        while(i<j) {
            while(arr[i]<arr[pivot] && i<last)
            i++;
            while(arr[j] > arr[pivot])
            j++;

            if(i<j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }                   //this is the logic and code for the quicksort
        }

        temp = arr[pivot];
        arr[pivot] = arr[j] ;
        arr[j] = temp;
        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);

    }
}

int main() {
    int i ,c,arr[29];
    // cout << "Enter the number of elements you will enter : ";
    // cin >> c;
    // cout << "Enter the elements  : " ;
    // //to read the array entered by the user write a for loop
    // for(i=0;i<c;i++)
    // cin >> arr[i];
    // quicksort(arr,0,c-1);
    // cout << "Sorted elements"<< "\n";
    // for(i=0;i<c;i++)
    // cout << " %d" << arr[i];
    // return 0;
    printf("Enter the number of elements: ");
    scanf("%d",&c);
    printf("Enter the %d elements ",c);
    for(i=0;i<c;i++)
    scanf("%d",&arr[i]);
    quicksort(arr,0,c-1);
    printf("sorted array");
    for(i=0;i<c;i++)
    printf("%d",arr[i]);
    return 0;
}

