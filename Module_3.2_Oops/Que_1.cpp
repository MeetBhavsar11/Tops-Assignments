#include <iostream>
using namespace std;

class Calculator {
public:
    
    double add(double a, double b) {
        return a + b;
    }

    
    double subtract(double a, double b) {
        return a - b;
    }

    
    double multiply(double a, double b) {
        return a * b;
    }

    
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
                 cout << "Cannot divide by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;

    double num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operation \n1 For Addition \n2 For Subtraction \n3 For Multiplication \n4 For Division \n";
    cin >> operation;

    switch (operation) {
        case '1':
            cout << "Result: " << calc.add(num1, num2) <<endl;
            break;
        case '2':
            cout << "Result: " << calc.subtract(num1, num2) <<endl;
            break;
        case '3':
            cout << "Result: " << calc.multiply(num1, num2) <<endl;
            break;
        case '4':
            cout << "Result: " << calc.divide(num1, num2) <<endl;
            break;
        default:
            cout << "Invalid operation" <<endl;
            break;
    }

    return 0;
}

