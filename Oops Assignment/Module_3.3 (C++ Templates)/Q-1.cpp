#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intVal1 = 5, intVal2 = 10;
    double doubleVal1 = 3.14, doubleVal2 = 6.28;

    cout << "Before swapping:" << endl;
    cout << "intVal1 = " << intVal1 << ", intVal2 = " << intVal2 << endl;
    cout << "doubleVal1 = " << doubleVal1 << ", doubleVal2 = " << doubleVal2 << endl;

    // Swap integers
    swapValues(intVal1, intVal2);

    // Swap doubles
    swapValues(doubleVal1, doubleVal2);

    cout << "\nAfter swapping:" << endl;
    cout << "intVal1 = " << intVal1 << ", intVal2 = " << intVal2 << endl;
    cout << "doubleVal1 = " << doubleVal1 << ", doubleVal2 = " << doubleVal2 << endl;

    return 0;
}

