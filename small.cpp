#include<iostream>
using namespace std;

int main() {
    // Defining the array with the given numbers
    int a[] = {1, 23, 77, 88, 90, 23, 45, 65};
    
    // Calculate the size of the array
    int size = sizeof(a) / sizeof(a[0]);
    
    // Print the array elements
    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    // Find the smallest element in the array
    int smallest = a[0];
    for(int i = 1; i < size; i++) {
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }
    
    // Print the smallest element
    cout << "The smallest number in the array is: " << smallest << endl;
    
    return 0;
}
