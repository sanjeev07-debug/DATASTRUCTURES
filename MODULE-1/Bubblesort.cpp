#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
        int i,j;

        for(i = 0 ; i < n - 1; i++) {
                for( j = 0;j = n-i-1 ;j++) {
                        if(arr[j]>arr[j+1] {
                                        int temp = arr[j];
                                        arr[j] = arr[j+1];
                                        arr[j+1] = temp;
                                }
                        }
                }


}

void printarray(int arr[],int size) {
        int i;
        for(i = 0;i<size;i++) {
                cout << arr[i] << " ";

        cout <<endl;
}
}

int main() {
        int arr[] = {5,4,1,4,2,9};
        int n = sizeof(arr)/sizeof(arr[0]);
        bubblesort(arr,n);
        cout << "sorted array : " ;
        printarray(arr,n);
        return 0;

}
