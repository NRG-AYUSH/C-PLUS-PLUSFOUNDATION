#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual ~Shape()
    {
        cout << "Shape Destructor" << endl;
    }

    virtual void draw()
    {
        cout << "Drawing Generic Shapes" << endl;
    }
};

class Circle : public Shape
{
public:
    explicit Circle(double radius) : radius(radius) {}

    ~Circle() override
    {
        cout << "Circle Destructor" << endl;
    }

    void draw() override
    {
        cout << "Drawing Circle With Area: "
             << M_PI*radius*radius << endl;
    }

private:
    double radius;
};
class Rectangle : public Shape
{
private:
double length,breadth;
public:
explicit Rectangle(double l,double b):length(l),breadth(b){}
void draw() override
{
    cout<<"Drawing Rectangle with Area: "
    <<length*breadth<<endl;
}
~Rectangle() override
{
    cout<<"DESTRUCTOR FOR THE RECTANGLE"<<endl;

}
};
int main()
{
    Shape*  Shapes[2];
    Shapes[0] = new Circle(5.0);
    Shapes[1] = new Rectangle(4.0,6.0);
    for(int i =0;i<2;i++)
    {
        Shapes[i]->draw();
    }
    for(int i=0;i<2;i++)
    {
        delete Shapes[i];
        Shapes[i]= nullptr;
    }
    return 0;
}

