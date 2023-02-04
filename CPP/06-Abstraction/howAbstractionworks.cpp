#include<iostream>
using namespace std;
 
class Vehicle
{
    public:
        void company()
        {
            cout<<"GFG\n";
        }
    public:
        void model()
        {
            cout<<"SIMPLE\n";
        }
    public:
        void color()
        {
            cout<<"Red/GREEN/Silver\n";
        }
    public:
        void cost()
        {
            cout<<"Rs. 60000 to 900000\n";
        }
    public:
        void oil()
        {
            cout<<"PETRO\n";
        }
    private:
        void piston()
        {
            cout<<"4 piston\n";
        }
    private:
        void manWhoMade()
        {
            cout<<"Markus Librette\n";
        }
};
int main()
{
     
    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();
}
