#include<iostream>
using namespace std;
int binarySearch(int[], int, int, int);
int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int target = 7;
    cout << "Binary Search on array (Iterative Method)\n";
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
    while(st <= end) {
        mid = st + (end - st) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(target < arr[mid]) {
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }
    return -1;
}
