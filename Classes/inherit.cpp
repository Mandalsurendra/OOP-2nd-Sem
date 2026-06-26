//KEC: Create a class name employee that represents employee's name, id, age, salary, bank name.
//Derive two classes one account that is derived from class employee that has salary , account number
//and should have a function to simulate salary send which should display deposited on employee name
// on particular bank account number on particular date.
//Derive another class name commputer department that is derived from class employee
//should have they are teaching and should have functon name role that display employee 
//name and subject they are teaching.
#include<iostream>
using namespace std;
class employee
{
    protected:
    string name;
    int id;
    int age;
    float salary;
    string bankName;
};

//First of all, constructor of base class is created then the derived class
// Similarly, destructor of derived class is called first then the base class