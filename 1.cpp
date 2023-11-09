// Linear Search

#include<iostream>
using namespace std;

int linearSearch(int arr[], int key, int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int key = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr,key,n);
    if(result == -1) {
        cout << "Element is not present in the array";
    }
    else {
        cout << "Element is present at index "<<result;
    }
    return 0;
}