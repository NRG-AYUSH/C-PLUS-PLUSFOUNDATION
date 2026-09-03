#include <iostream>
using namespace std;
class Vehicle
{
protected:
    string brand;
    int topSpeed;

public:
    Vehicle() {}
    Vehicle(string n, int ts)
    {
        brand = n;
        topSpeed = ts;
    }
    void showDetails()
    {
        cout << "BRAND NAME:" << brand << endl;
        cout << "TOP SPEED: " << topSpeed << endl;
    }
};
class ElectricCar : public Vehicle
{
private:
    int batteryCapacity;
    int range;

public:
    ElectricCar(string br, int tp, int bc, int ra)
    {
        brand = br;
        topSpeed = tp;
        batteryCapacity = bc;
        range = ra;
    }
    void showEVDetails()
    {
        cout << "BRAND:" << brand << endl;
        cout << "TOPSPEED: " << topSpeed << endl;
        cout << "BATTERY CAPACITY(IN KwH): " << batteryCapacity << endl;
        cout << "RANGE (IN Kms):" << range << endl;
    }
};
int main(){
    string brand;
    int topSpeed, batteryCapacity, range;
cout<<"ENTER THE CAR BRAND,TOP SPEED,BATTERY CAPACITY AND RANGE"<<endl;
cin>>brand>>topSpeed>>batteryCapacity>>range;
ElectricCar ev(brand, topSpeed, batteryCapacity, range);
ev.showDetails();
ev.showEVDetails();
return 0;}