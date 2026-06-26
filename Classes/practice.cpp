//WAP to create a class weight having data members kg and gram and another class name cost
//having data members rate and total cost. Now use the concept of friend as bridge function
//to calculate the total price of any goods for the given quantities.

#include<iostream>
using namespace std;
//Class declaration
class weight;
class cost;
class weight
{
    float kg, gram;
    public:
    weight()  //Default constructor
    {
        cout<<"Default constructor called."<<endl;
        kg=gram=0;
    }
    weight(float kg, float gram)  //Parametrized constructor
    {
        cout<<"Constructor called."<<endl;
        this->kg=kg;
        this->gram=gram;
    }
    void display()
    {
        cout<<"Weight: "<<kg<<" KG "<<gram<<" Grams."<<endl;
    }
    friend cost price(weight, cost &);
    ~weight()
    {
        cout<<"Destructor called."<<endl;
    }
};
class cost
{
    float rate, totalCost;
    public:
    cost()     //Default constructor
    {
        cout<<"Default constructor called."<<endl;
        rate=totalCost=0.0;
    }
    cost(float rate, float totalCost)   //Parametrized constructor
    {
        cout<<"Constructor called."<<endl;
        this->rate=rate;
        this->totalCost=totalCost;
    }
    friend cost price(weight, cost &);
    void display()
    {
        cout<<"Total price: Rs. "<<totalCost<<endl;
    }
    ~cost()
    {
        cout<<"Destructor called."<<endl;
    }
};
cost price(weight w, cost &c) 
{
    float r=c.rate,t;
    float t_weight=w.kg+(w.gram/1000);
    c.totalCost = t_weight*c.rate;
    return cost(r,c.totalCost);
}
int main()
{
    weight w(2,300);
    cost c(100,2);
    price(w,c);
    w.display();
    c.display();
    return 0;
}


//Assuming suitable data, illustrate the use of member function of one class as a friend of another class.