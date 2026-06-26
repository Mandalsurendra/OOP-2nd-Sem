// Default parameter/argument helps in function overloading
#include <iostream>
using namespace std;

void add(int a = 0, int b = 0, int c = 0) // Function with default parameters
{
    cout << "Sum is:" << a + b + c << endl;
}

int main()
{
    add();     // Function call for a function with all parameters default
    add(1);    // 'a' is reassigned to 1; 'b' and 'c' remain at default values
    add(2, 2); // 'a' is reassigned to 2; 'b' is reassigned to 2; 'c' remains default
    add(3, 3, 3); // 'a', 'b', and 'c' are all reassigned to 3
    return 0;
}
