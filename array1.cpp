#include <iostream>
using namespace std;

int findLargest(int arr[], int size) {
    int maxNumber = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}

int main() {
    int numbers[] = {3, 8, 1, 5, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int largest = findLargest(numbers, size);
    cout << "The largest number is: " << largest << endl;
    return 0;
}

