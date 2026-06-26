//WAP to convert user deffined data type usdollar into built in data type float nepalirupee and vice versa.
#include<iostream>
using namespace std;
class usdollar
{
    float dollar;
    public:
    usdollar()
    {
        dollar=0;
    }
    // usdollar(float usd)
    // {
    //     dollar=usd;
    // }
    usdollar(int x)
    {
        dollar=(float)x/150;
    }
    operator int()
    {
        return dollar*150;
    }
    void display()
    {
        cout<<"Dollar(d): "<<dollar<<" $"<<endl;
    }

};
int main()
{
    int NRs=100;
    usdollar d=NRs;
    d.display();
    int npr=d;
    cout<<"d usd in NRs: "<<npr<<endl;
    return 0;
}
