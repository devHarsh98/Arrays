#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int ele, int n) {
    int start = 0;
    int end = n - 1;
    int result = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == ele) {
            result = mid;
            end = mid - 1;   // last ocuurence (start = mid + 1)
        }
        else if(ele < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {2,4,10,10,10,18,20};
    int ele = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = firstOccurrence(arr,ele,n);
    if(result == -1) {
        cout << "Element is not present in the array";
    }
    else {
        cout << "First Occurence of Element at index "<<result;
    }
    return 0;
}