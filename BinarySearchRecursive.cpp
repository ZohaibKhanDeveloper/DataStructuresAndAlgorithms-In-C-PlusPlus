#include<iostream>
using namespace std;
int binarySearch(int[], int, int, int);
int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int target = 7;
    cout << "Binary Search on array (Recursive Method)\n";
    cout << "------------------------------------------\n";
    int loc = binarySearch(arr, target, 0, 6);
    if(loc != -1)
        cout << "Element Found at index: " << loc << endl;
    else
        cout << "Element Not found..." << endl;
    return 0;
}

int binarySearch(int arr[], int target, int st, int end) {
    int mid = 0;
    if(st<=end){
    	mid = st + (end - st) / 2;
    	if(target < arr[mid])
    		return binarySearch(arr, target, 0, mid - 1);
    	else if(target > arr[mid]) 
			return binarySearch(arr, target, mid + 1, end);	
		else 
			return mid;		
	}
    return -1;
}
