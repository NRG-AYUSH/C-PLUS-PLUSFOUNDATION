#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
public:
    double a, b;
    SimpleCalculator(double x, double y)
    {
        a = x;
        b = y;
    }
    void add()
    {
        cout << "Addition: " << a + b << endl;
    }
    void subtract()
    {
        cout << "Subtraction: " << a - b << endl;
    }
    void multiply()
    {
        cout << "Multiplication: " << a * b << endl;
    }
    void divide()
    {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};
class ScientificCalculator
{
public:
    double a, b;
    ScientificCalculator(double x, double y)
    {
        a = x;
        b = y;
    }
    void power()
    {
        cout << "Power: " << pow(a, b) << endl;
    }
    void trignomertic()
    {
        cout << "Sine: " << sin(a) << endl;
        cout << "Cosine: " << cos(a) << endl;
        cout << "Tangent: " << tan(a) << endl;
    }
    void inverseTrignomertic()
    {
        cout << "Inverse Sine: " << asin(a) << endl;
        cout << "Inverse Cosine: " << acos(a) << endl;
        cout << "Inverse Tangent: " << atan(a) << endl;
    }
    void logarithm()
    {
        if (a > 0)
            cout << "Logarithm: " << log(a) << endl;
        else
            cout << "Logarithm is not defined for non-positive values." << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    HybridCalculator(double x, double y) : SimpleCalculator(x, y), ScientificCalculator(x, y) {}
    void display()
    {cout<<"Simple CALCULATOR"<<endl;
        add();
        subtract();
        multiply();
        divide();
        cout<<"Scientific CALCULATOR"<<endl;
        power();
        trignomertic();
        inverseTrignomertic();
        logarithm();
    }
};
int main()
{
    
    
    
    double x, y;
        cout << "Enter two numbers: ";
        cin >> x >> y;
        
        HybridCalculator hybridCalc(x, y);
        hybridCalc.display();
        
    
    return 0;
}