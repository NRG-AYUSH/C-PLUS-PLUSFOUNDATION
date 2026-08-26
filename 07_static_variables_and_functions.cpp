#include <iostream>
using namespace std;
class Car
{
private:
    string model;
    double price;
    static int totalCarsProduced;
    static double totalInventoryValue;

public:
    Car(string model1, double price2)
    {
        model = model1;
        price = price2;
        totalCarsProduced += 1;
        totalInventoryValue += price;
    }
    static int getTotalCars()
    {

        return totalCarsProduced;
    }
    static double getTotalValue()
    {

        return totalInventoryValue;
    }
    static void displayFactoryStats()
    {
        cout << "THE TOTAL NUMBER OF CARS PRODUCED IS " << totalCarsProduced << endl;
        cout << "THE TOTAL RETURN VALUE IS " << totalInventoryValue << endl;
    }
    void displayCarInfo()
    {
        cout << "Model: " << model << "  " << "Price" << price << "\n";
    }
};
int Car::totalCarsProduced = 0;
double Car::totalInventoryValue = 0.0;
int main()
{
    cout << "--- Initial Factory Stats ---" << endl;
    Car::displayFactoryStats();
    Car c1("THAR", 1500000.0);
    Car c2("Scorpio", 1800000.0);
    Car c3("Virtus", 1600000.0);

    cout << "\n--- Individual Car Details ---" << endl;
    c1.displayCarInfo();
    c2.displayCarInfo();
    c3.displayCarInfo();
    cout << "\n--- Updated Factory Stats ---" << endl;
    // Call static method directly via class name
    Car::displayFactoryStats();

    return 0;
}
