#include <bits/stdc++.h>
using namespace std;

// void modify (int val) {
//  val = 50;
// }

// void modify1(int *ptr)
// {
//     *ptr = 20;
// }

// void modify3(int &val)
// {
//     val = 50;
//     cout << "functional val : " << &val << endl;
// }

class Student
{
public:
    int a, b;
    Student(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

int main()
{
    //* What is a Pointer?
    /*A pointer is a special type of variable that stores the memory address of another variable. Instead of holding a value directly, it "points to" the location in memory where the value is stored. This allows for more powerful and flexible programming, particularly for tasks involving dynamic memory management and efficient data manipulation.*/

    //* Declaring and Initializing Pointers
    // int var = 10;
    // int *ptr = &var;
    // cout << "value of var : " << var << endl;
    // cout << "Address of var : " << &var << endl;
    // cout << "value of ptr  : " << ptr << endl;

    //*Address-of (&) and Dereference (*) Operators
    /*The address-of operator (&) is a unary operator that returns the memory address of its operand.
    The dereference operator (*) is a unary operator that returns the value located at the memory address stored in the pointer.*/

    // int var = 25;
    // int *ptr = &var;
    // cout << "Value of var: " << var << endl;
    // cout << "Address stored in ptr: " << ptr << endl;
    // cout << "Value at the address stored in ptr: " << *ptr << endl;
    // // use the dereference operator to change the value
    // *ptr = 50;
    // cout << "New value of var : " << var << endl;

    //* Pointer Arithmetic
    /*You can perform arithmetic operations like addition and subtraction on pointers.When you increment a pointer,
    it moves forward by the size of the data type it points to, not by a single byte.*/

    //  int number[] = {10, 20, 30, 1, 56};
    //  int *ptr = number; // pointer trigger out first value of array
    //  cout << "First value of array : " << *ptr << endl;
    //  ptr++;
    //  cout << "Second value on array : " << *ptr << endl;
    //  ptr += 3;
    //  cout << "Fourth value of array : " << *ptr << endl;

    //* Pointer to a Pointer (Double Pointer)
    /*
    A pointer can also store the memory address of another pointer. This is called a pointer to a pointer or a double pointer. It is declared using two asterisks (**).
    //! When to use it:
    To create dynamic 2D arrays (an array of pointers, where each pointer points to an array of values).
    In a function, to modify the pointer variable of the caller itself (i.e., to make the caller's pointer point to a new memory location).
    */

    //    int val = 10;
    //    int *ptr = &val;
    //    cout << "ptr holds address: " << ptr << endl;
    //    cout <<  "Address of val is:"  << &val << endl;
    //     cout << " Value *ptr points to: " << *ptr << endl;
    //     // Declare a pointer-to-a-pointer 'ptr2' and store the memory address of 'ptr'.
    //     int **ptr2 = &ptr;
    //     cout << "ptr2 holds address: " << ptr2 << endl;
    //     cout << " Address of ptr is: " << &ptr << endl;
    //     cout << " Value *ptr2 points to: " << *ptr2 << endl;
    //     // Use double dereferencing to access and modify the original variable 'val'.
    //     // *ptr2 resolves to 'ptr'. **ptr2 resolves to 'val'.
    //     **ptr2 = 50;
    //     // Print the new value of 'val' to confirm it was changed via the double pointer.
    //     cout << "New value of val: " << val << endl;

    //* Pointers and Arrays
    /*
    In C++, arrays and pointers have a close relationship. The name of an array can be used as a pointer to its first element.
    */

    // int ar[5] = {5, 10, 15, 20, 25};
    // int *ptr = ar;
    // //array name as a pointer
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << "Element " << i << " : " << *(ar + i) << endl;
    // }
    // //separate pointer
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << "Element : " << *ptr << endl;
    //     ptr++;
    // }

    //* Function Argument Passing Methods in C++
    /*
    In C++, arguments can be passed to functions in three primary ways: by value, by pointer, and by reference. Each method has distinct characteristics and use cases, particularly concerning how they handle the original data sent from the caller.
    */

    //* Pass-by-Value
    /*
    not modify original value
     */
    // int val = 10;
    // modify(val);
    // cout << val << endl;

    //* Pass-by-Pointer
    /*
    In pass-by-pointer, the function receives the memory address
    of the argument. By dereferencing this address (using the * operator), the function can directly access and modify the original variable in the calling scope.

    When to use it:
    When the function needs to modify the original variable.
    When passing large objects or arrays to avoid the high cost of copying.
    To indicate optional arguments (by allowing a nullptr to be passed).
    */

    // int val = 10;
    // modify1(&val);
    // cout << val << endl;

    //* Pass-by-Reference

    /*
    In pass-by-reference, the function receives an alias (or reference) to the original argument. The syntax is simpler than pointers, but the effect is similar: the function can directly access and modify the original variable. A reference acts as another name for the same memory location.

    When to use it:
    When the function needs to modify the original variable (often preferred over pointers for its cleaner syntax).
    When passing large objects to avoid copying, and you are certain the argument will not be null.

    */
    //    int val = 10;
    //    cout << &val << endl;
    //    modify3(val);
    //    cout << val << endl;

    //* Arrow Operator
    /*
    In C++, when a pointer is pointing to an object, we use the arrow operator (->) to access the properties of that object.
    */

    //    Student obj(10, 20);
    //    cout << obj.a << " " << obj.b << endl;

    return 0;
}