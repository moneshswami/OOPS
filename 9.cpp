#include <iostream>
using namespace std;

template <typename T, size_t N>
T findMin(const T (&arr)[N]) {
    T minVal = arr[0];
    for (size_t i = 1; i < N; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    const size_t size = 5;
    int intArray[size];
    cout << "Enter " << size << " integers:" << endl;
    for (size_t i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> intArray[i];
    }
    int minInt = findMin(intArray);
    cout << "Minimum value in the integer array: " << minInt << endl;
    return 0;
}
