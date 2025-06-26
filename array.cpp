#include<iostream>
#include<climits>
using namespace std;

int getMin(int nums[], int n) {
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(nums[i] < min) {  // Fixed comparison
            min = nums[i];
        }
    }
    return min;
}

int getMax(int nums[], int n) {
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}

int main() {
    int size = 5;
    int nums[size];

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    cout << "Maximum value: " << getMax(nums, size) << endl;
    cout << "Minimum value: " << getMin(nums, size) << endl;

    return 0;
}
