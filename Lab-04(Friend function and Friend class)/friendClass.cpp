//Assuming suitable data, illustrate the use of member function of one class as a friend of another class.

#include<iostream>
using namespace std;
//Class declaration
class weight;
class cost;

class cost
{
    float rate, totalCost;
    public:
    cost()     //Default constructor
    {
        cout<<"Default constructor called."<<endl;
        rate=totalCost=0.0;
    }
    cost(float rate)   //Parametrized constructor
    {
        cout<<"Constructor called."<<endl;
        this->rate=rate;
    }
    void price(weight w);  //Member function oc cost that is friend of weight
    ~cost()
    {
        cout<<"Destructor called."<<endl;
    }
};
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
    float totalWeight(weight);   //Member function of weight
    friend void cost::price(weight w); //Member function of weight as friend of cost
    ~weight()
    {
        cout<<"Destructor called."<<endl;
    }
};

float weight::totalWeight(weight w)
{
    float tWeight=w.kg+w.gram/1000;
    return tWeight;
}
void cost::price(weight w)
{
    totalCost=(w.kg+w.gram/1000)*rate;
    cout<<"Total price: Rs. "<<totalCost<<endl;
}
int main()
{
    weight w(2,300);
    cost c(100);
    w.display();
    c.price(w);
    return 0;
}