#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int id;
    double salary;
    string name;

public:
    Employee(int i, double s, string n) : id(i), salary(s), name(n) {}
    double getSalary()
    {
        return salary;
    }
    void infoDisplay()
    {
        cout << "-----EMPLOYEE DETAILS-------" << endl;
        cout << "Name: " << name << "\nID: " << id << "\nSalary: " << salary << endl;
    }
};
int main()
{

    Employee *team[3];
    team[0] = new Employee(1205, 100000.02, "AYUSH");
    team[1] = new Employee(207, 100000.02, "SNEHA");
    team[2] = new Employee(154, 10000.02, "HEHE");
    team[3] = new Employee(123, 10000.02, "HURRR");
    cout << "=== Employees withㅤSalary > 50,000 ===" << endl;
    for (int i = 0; i < 3; i++)
    {
        // Arrow operator and getter used
        if (team[i]->getSalary() > 50000)
        {
            team[i]->infoDisplay();
        }
    }
    for (int j = 0; j < 3; j++)
    {
        delete team[j];
        team[j] = nullptr;
    }

    return 0;
}
