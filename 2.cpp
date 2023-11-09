// Binary Search

#include<iostream>
using namespace std;

int binarySearch(int arr[], int ele, int n) {
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == ele) {
            return mid;
        }
        else if(ele < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int ele = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr,ele,n);
    if(result == -1) {
        cout << "Element is not present in the array";
    }
    else {
        cout << "Element is present at index "<<result;
    }
    return 0;
}