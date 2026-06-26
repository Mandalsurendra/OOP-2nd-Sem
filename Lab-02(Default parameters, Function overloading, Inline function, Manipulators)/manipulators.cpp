// Manipulators
#include <iostream>
#include <iomanip> // Header file to be included for manipulators.
using namespace std;

int main()
{
    bool p = true;   // Boolean variable initialized to true.
    bool q = 0;      // Boolean variable initialized to false (0 means false).
    int n = 123;

    cout << setw(20) << n << endl;   // setw(20): sets the field width to 20 characters, right-aligns the number within that space
    cout << setfill('*') << setw(20) << n << endl; // setfill('*'): fills empty spaces with '*' instead of spaces, setw(20): again sets width to 20
    cout << hex << n << endl;   // hex: displays the integer in hexadecimal format
    cout << oct << n << endl;   // oct: displays the integer in octal format
    cout << noboolalpha << p << endl;   // noboolalpha: prints boolean values as 1 (true) or 0 (false)
    cout << boolalpha << q << endl;     // boolalpha: prints boolean values as 'true' or 'false'

    return 0;
}
