//Create a ATM Working System.
//For this, create a class named 'accountHolder' having data members name, id(being starting from 1 and auto increment, unique for all) and amount. Make no. of account holder static. Use both default and parametrized constructors. Make member functions withdraw(), deposit() and sapat()[This enables one to take loan from another account holder onlf if loan amount is less than loan provider's ammount]. Make a menu system to let the user choose what he want to do. Make authenticiation system to disable unauthorized access. Also use bool value to check user's account active or not.
#include<iostream>
#include<iomanip> // For manipulators
#include<string.h>
using namespace std;
class accountHolder
{
    private:
    static int idCount; //Auto increment ID 
    static int count;  //It counts total no. of accounts.
    int id;
    string name;
    float amount;
    float loan;
    string password;
    bool active;     // Bool value to check account status i.e. active or not.

    public:   
    accountHolder()     //Default constructor
    {
        id=++idCount;
        count++;
        name="null";
        amount=0.0;
        loan=0.0;
        password="null";
        active=true;
    }
    accountHolder(string name, float amount, float loan, string password)    //Parametrized constructor
    {
        this->id=++idCount;
        this->count=count++;
        this->name=name;
        this->amount=amount;
        this->loan=loan;
        this->password=password;
        this->active=true;
    }

    bool authentication(string , bool ); //Authenticiation function declaration
    int display();  //Display account holder's information function declaration.
    int deposit(float );   //Deposit function declaration
    int withdraw(float );   //Withdraw function declaration
    int sapat(accountHolder &, float ); //Sapat function declaration
    int getId(); //ID returning function declaration
    string getName();  //Account holder's name returning function declaration
    int deactivate(); //Deactivate account function declaration
    int activate();   //Activate account function declaration
    int boolvalue();   //Helps in activation of an account.
    int authenticate(string password);  //Helps in activation of an account.
};

int accountHolder::idCount=0;     //Initializing static data members
int accountHolder::count=0;

bool accountHolder::authentication(string password, bool active) //Authenciation function
{
    return (this->password==password && this->active==active);
}

int accountHolder::display()  //Display account holder's information function declaration.
{
    cout<<"Dear "<<this->name<<"! Your information is as follows:"<<endl<<"ID: "<<this->id<<endl<<"Account's Holder Name: "<<this->name<<endl<<"Current Balance: Rs. "<<this->amount<<endl<<"Loan amount: Rs. "<<this->loan<<endl<<"Account status: "<<(this->active? "Active." : "Not active.")<<endl;
    return 0;
}

int accountHolder::deposit(float amount)   //Deposit function
{
    if(!active)
    {
        cout<<"Sorry! Amount cannot be deposoted. Account is inactive."<<endl;
        return 0;
    }
    this->amount+=amount;
    cout<<"Amount deposited. Current balance: Rs. "<<this->amount<<endl;
    return 0;
}

int accountHolder::withdraw(float amount)   //Withdraw function
{
    if(!active)
    {
        cout<<"Sorry! Amount cannot be withdrawed. Account is inactive."<<endl;
        return 0;
    }
    if(amount<=this->amount)
    {
        this->amount-=amount;
        cout<<"Amount withdrawed. Current balance: Rs. "<<this->amount<<". Thanks for choosing our ATM. -Nepal Bank Limited. "<<endl;
        return 0;
    }
    else
    {
        cout<<"Sorry! Insufficient balance! Please enter amount less or equal to your balance(Rs. "<<this->amount<<" Thank you!)"<<endl;
        return 0;
    }
    return 0;
}

int accountHolder::sapat(accountHolder &borrower, float loanAmount) //Sapat function
{
    if(!active || !borrower.active)
    {
        cout<<"Sorry! Loan cannnot be taken. One of the accounts is inactive."<<endl;
        return 0;
    }
    if(loanAmount<=amount)
    {
        amount-=loanAmount;
        borrower.amount+=loanAmount;
        borrower.loan=loanAmount;
        cout<<"Loan of Rs. "<<loanAmount<<" gets sucessfully transferred from "<<name<<" to "<<borrower.name<<endl;
        return 0;
    }
    else
    {
        cout<<"Sorry! Loan cannnot be taken. Loan amount exceeds lender's amount."<<endl;
        return 0;
    }
    return 0;
}

int accountHolder::getId()   //ID returning function
{
    return id;
}

string accountHolder::getName()   //Account holder's name returning function
{
    return name;
}

int accountHolder::deactivate() //Deactivate account function
{
    active=false;
    return 0;
}

int accountHolder::activate()   //Activate account function
{
    active=true;
    return 1;
}

int accountHolder::boolvalue()  //Helps in activation of an account.
{
    this->active=true;
    return 1;
}

int accountHolder::authenticate(string password)  //Helps in activation of an account.
{
    if(this->password==password)
    {
        return true;
    }
    return false;
}

int main()
{
    accountHolder a1("Surendra Kumar Mandal", 10000, 0, "surendra123"), a2("Shiv Shankar Mandal", 400000000, 0, "shiv123"), a3("Rampari Devi", 150000000, 0, "rampari123"), a4("Nitesh Kumar Mandal", 50000, 0, "nitesh123"), a5("Rupam Kumari", 100000, 0, "rupam123");
    accountHolder a[]={a1,a2,a3,a4,a5};
    int choice, id;
    string password;
    while(1)
    {
        cout<<endl<<"Welcome to our ATM."<<endl<<"Nepal Bank Limited"<<endl;
        cout<<endl<<"Actions:"<<endl;
        cout<<"1. Deposit"<<endl;
        cout<<"2. Withdraw"<<endl;
        cout<<"3. Sapat"<<endl;
        cout<<"4. Display account information."<<endl;
        cout<<"5. Deactivate account"<<endl;
        cout<<"6. Activate account"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<endl<<"Enter a choice: ";
        cin>>choice;
        if(choice==7)
        {
            break;
        }
        if(choice==6)
        {
            cout<<"Enter account id: ";
            cin>>id;
            cout<<"Enter password: ";
            cin>>password;
            if(a[id-1].authenticate(password))
            {
                a[id-1].boolvalue();
                goto label;
            }
        }
        cout<<"Enter account id: ";
        cin>>id;
        cout<<"Enter password: ";
        cin>>password;

        label:
        bool found= false;
        for(int i=0;i<5;i++)
        {
            if(a[i].getId()==id && a[i].authentication(password,true))
            {
                found=true;
                switch(choice)
                {
                    case 1:       //For deposit
                    {
                        float amount;
                        cout<<"Enter deposit amount: ";
                        cin>>amount;
                        a[i].deposit(amount);
                        break;
                    }

                    case 2:   //For withdraw
                    {
                        float amount;
                        cout<<"Enter withdraw amount: ";
                        cin>>amount;
                        a[i].withdraw(amount);
                        break;
                    }

                    case 3:  //For sapat
                    {
                        int id;
                        float loanAmount;
                        cout<<"Enter reciever id: ";
                        cin>>id;
                        cout<<"Enter loan amount: ";
                        cin>>loanAmount;
                        a[i].sapat(a[id-1],loanAmount);
                        break;
                    }

                    case 4:   //For display account information
                    {
                        a[i].display();
                        break;
                    }

                    case 5: //For deactivate account
                    {
                        a[i].deactivate();
                        cout<<"Dear "<<a[i].getName()<<"! Your account has been successfully deactivated."<<endl;
                        break;
                    }

                    case 6: //For activate account
                    {
                        a[i].activate();
                        cout<<"Dear "<<a[i].getName()<<"! Your account has been successfully activated."<<endl;
                        break;
                    }

                    default:
                    {
                        cout<<"Invalid choice! Please enter a no. in between 1-7."<<endl;
                    }
                }
            }
        }
        if(!found)
        {
            cout<<"Account not found or Authentication failed! Please open a bank account."<<endl<<"Nepal Bank Limited"<<endl;
        }
    }
    return 0;
}
