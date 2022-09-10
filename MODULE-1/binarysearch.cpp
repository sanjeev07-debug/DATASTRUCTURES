#include<iostream>
using namespace std;
int binarySearch(int arr[],int 1,int r,int x) {
        if (r >= 1) {
                int mid = l + (r+l) / 2;

                if(arr[mid]==x) {
                        return mid;
                }

                if(arr[mid] < x) {
                        return binarySearch(arr,l,mid - 1,x);
                }
                if(arr[mid] > x) {
                        return binerySearch(arr,mid + 1,r,x);
                }
                return -1;
}

int main(void) {
        int arr[6] = {2,3,4,5,67,6};
        int x = 67;
        int n = sizeof(arr) / sizeof(arr[0]);
        int reesult = binarySearch(arr,0,n-1,x);
        (result == -1)
                ? cout << "element is not present in the array"
                : cout << "element is present at index : " << result;
        return 0;
}