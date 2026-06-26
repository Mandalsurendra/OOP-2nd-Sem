// Inline function
#include <iostream>
using namespace std;

inline int compare(int x, int y) // Use inline before return type of function.
{
    int t = x > y ? x : y;
    return t;
}

int main()
{
    cout << "The greatest number is: " << compare(10, 100) << endl;
    return 0;
}
