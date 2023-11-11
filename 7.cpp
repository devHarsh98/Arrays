// Number of times a sorted array is rotated.

#include <bits/stdc++.h> 
using namespace std; 

int countRotations(int arr[], int n) { 
	int start = 0, end = n - 1; 
    
    // returns 0 if array is already sorted* 
	if (arr[start] <= arr[end]) {
		return 0; 
	}
	
	while (start <= end) { 
		// if first element is mid or 
		// last element is mid 
		// then simply use modulo so it 
		// never goes out of bound. 
		int mid = start + (end - start) / 2; 
		int prev = (mid + n - 1) % n; 
		int next = (mid + 1) % n; 

		if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
			return n - mid; 
		}
		else if (arr[0] <= arr[mid]) {
			start = mid + 1; 
		}
		else if (arr[mid] <= arr[end]) {
			end = mid - 1; 
		}
	} 
} 

int main() { 
	int arr[] = {12,15,18,2,5,6,8,11}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << countRotations(arr, n); 
	return 0; 
}