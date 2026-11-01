
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Ask the user for three integer values
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Enter the third integer: ";
    cin >> num3;

    // Allocate dynamic memory for three integers
    int* ptr1 = new int(num1);
    int* ptr2 = new int(num2);
    int* ptr3 = new int(num3);

    // Display the original variable values
    cout << "\nOriginal Integer Values:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;

    // Display the values stored in dynamic memory
    cout << "\nPointer Values:" << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;

    // Display pointer memory addresses
    cout << "\nPointer Memory Addresses:" << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "ptr3 = " << ptr3 << endl;

    // Release dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Prevent dangling pointers
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    cout << "\nMemory successfully released." << endl;

    return 0;
}
