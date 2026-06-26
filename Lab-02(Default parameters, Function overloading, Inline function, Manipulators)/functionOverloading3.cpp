// Function overloading
#include <iostream>
using namespace std;

void add(float a, int b) // First function with function name 'add'
{
    cout << "Sum: " << a + b << endl;
}

// void add(int a, float b) // Second function with function name 'add'
// {
//     cout << "Sum: " << a + b << endl;
// }

int main()
{
    add(2.2, 3);   // This function call will execute first function as it has two arguments: float then int.
    add(2, 2.3);   // This function call will execute first function but will convert implicit conversion from float/double to int.
    return 0;
}
