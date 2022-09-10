#include<iostream>
using namespace std;
int main() {
        int arr[6] = {24,34,243,24,23,32};
        int key = 24,n = 6,i;
        for(i = 0; i < n; i++) {
                if(arr[i] == key) {
                        cout<<i+1; //print the position of the search
                        break;
                }
        }
        if(i==n) {
                cout <<"hey pls try again";
        }
        return 0;
}