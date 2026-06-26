// Create a class named weight that represents weight in kg and gram
// Create another class named price that represents price of the weight.
// Create friend function that is friend to both class and 
// Determine the price of input weight
//Class weight and class price
#include<iostream>
using namespace std;
//Class declaration
class weight;
class price;
class weight
{
    private:
    float kg,gm;
    public:
    weight()
    {
        kg=gm=0;
    }
    weight(float k, float g):kg(k),gm(g) //Initialization list
    {
        if(gm>=1000)
        {
            kg++;
            gm=gm-1000;
        }
    }
    void show()
    {
        cout<<"Weight: "<<kg<<" kg "<<gm<<" gm "<<endl;
    }
    friend price conv(weight, price);
};
class price
{
    price():{}
    const float rate;  //price per kg      immutable: That cannot be changed   mutable: That can be changed
    float total;
    public:
    price(float r=0, float t=0):rate(r),total(t){}
    void show() const{
        cout<<"Rate per kg:"<<rate<<endl;
        cout<<"Total price"
    }
    friend price conv(weight, price);
};

price conv(weight w, price p)
{
    float rate=1000;
    float total=0;
    float totalweight=w.kg+(float)(w.gm/1000);   //static_cast<float>
    total=totalweight*p.rate;
    return price(rate, total);
}

int main()
{
    weight w(1,400);
    price p;
    p=conv(w,p);
    p.show();
}