// Default parameter/argument
#include <iostream>
using namespace std;

void add(int a, int b = 1, int c = 1) // Making default parameters: You have to make default parameters from right.
{
    cout << "Sum is:" << a + b + c << endl;
}

int main()
{
    add(1);      // The value of 'a' will be assigned 1
    add(2, 2);    // The value of 'a' will be assigned 2 and that of 'b' will be reassigned 2 from 1
    add(3, 3, 3);  // The value of 'a' will be assigned 3 and that of 'b' and 'c' will be reassigned 3 from 1
    return 0;
}
