// Count of an Element in a Sorted Array

#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int ele, int n) {
    int start = 0;
    int end = n - 1;
    int result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == ele) {
            result = mid;
            end = mid - 1;
        } else if (ele < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}

int lastOccurrence(int arr[], int ele, int n) {
    int start = 0;
    int end = n - 1;
    int result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == ele) {
            result = mid;
            start = mid + 1;
        } else if (ele < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}

int elementCount(int arr[], int ele, int n) {
    int firstOccurrenceIndex = firstOccurrence(arr, ele, n);
    
    if (firstOccurrenceIndex == -1) {
        return -1;      // Element not found
    }
    
    int lastOccurrenceIndex = lastOccurrence(arr, ele, n);
    int count = lastOccurrenceIndex - firstOccurrenceIndex + 1;
    return count;
}

int main() {
    int arr[] = {2, 4, 10, 10, 10, 18, 20};
    int ele = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = elementCount(arr, ele, n);
    if (result == -1) {
        cout << "Element is not present in the array";
    } else {
        cout << "Count : " << result;
    }
    return 0;
}