#include <iostream>

using namespace std;

int main() {
    // Declaration of a pointer
    int* ptr;
    //pointrs must be of same type as the variable it is pointing to

    // Initialization of a pointer
    int var = 10;
    ptr = &var; // ptr now holds the address of var

    // Accessing the value using the pointer (dereferencing)
    cout << "Value of var: " << var << endl; // Output: 10
    cout << "Address of var: " << &var << endl; // Output: address of var
    cout << "Value pointed to by ptr: " << *ptr << endl; // Output: 10
    cout << "Address stored in ptr: " << ptr << endl; // Output: address of var

    // Modifying the value using the pointer
    *ptr = 20;
    cout << "New value of var: " << var << endl; // Output: 20

    // Null pointer
    int* nullPtr = nullptr;
    cout << "Value of nullPtr: " << nullPtr << endl; // Output: 0

    // Pointer to pointer
    int** ptrToPtr = &ptr;
    cout << "Value pointed to by ptrToPtr: " << **ptrToPtr << endl; // Output: 20

    // Dynamic memory allocation
    int* dynamicPtr = new int;
    *dynamicPtr = 30;
    cout << "Value of dynamically allocated memory: " << *dynamicPtr << endl; // Output: 30
    delete dynamicPtr; // Free the allocated memory
    // for null pointer, delete does nothing
    // for pointer pointing to dynamically allocated memory, delete frees the memory
    // for pointer pointing to statically allocated memory, delete causes undefined behavior
    // for pointer pointing to dynamically allocated memory that has already been freed, delete causes undefined behavior
    // for declareing null pointer, assign 0 to it
    int i =3;
    int *t = &i;
   
    *t=*t+1;// adds 1 to the value at that memory location
    cout<<*t<<endl;// output 4
    cout<<t<<endl;// output address of memory location
    t=t+1;// goes to next memory location like next number next character
    cout<<t<<endl;// output address of next memory location
    
    return 0;
}