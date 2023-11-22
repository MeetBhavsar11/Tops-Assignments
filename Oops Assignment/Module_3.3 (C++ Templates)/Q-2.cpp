#include <iostream>
using namespace std;

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 25, 12, 22, 11};
    double doubleArr[] = {3.5, 2.2, 9.8, 5.5, 1.1};
    char charArr[] = {'b', 'd', 'a', 'c'};

    int intSize = sizeof(intArr) / sizeof(int);
    int doubleSize = sizeof(doubleArr) / sizeof(double);
    int charSize = sizeof(charArr) / sizeof(char);

    cout << "Before sorting:" << endl;
    cout << "Integer Array: ";
    printArray(intArr, intSize);

    cout << "Double Array: ";
    printArray(doubleArr, doubleSize);

    cout << "Char Array: ";
    printArray(charArr, charSize);

    // Sorting arrays
    selectionSort(intArr, intSize);
    selectionSort(doubleArr, doubleSize);
    selectionSort(charArr, charSize);

    cout << "\nAfter sorting:" << endl;
    cout << "Integer Array: ";
    printArray(intArr, intSize);

    cout << "Double Array: ";
    printArray(doubleArr, doubleSize);

    cout << "Char Array: ";
    printArray(charArr, charSize);

    return 0;
}

