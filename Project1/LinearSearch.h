#include <iostream>
#include <vector>
using namespace std;

template <class T>
int linearSearch(const vector<T>& arr, const T& target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;  // Return the index where the target element is found
        }
    }
    return -1;  // Return -1 if the target element is not found
}