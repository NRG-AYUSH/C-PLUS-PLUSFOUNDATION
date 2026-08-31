#include <iostream>
using namespace std;
class Students
{
    string name;
    int rollNo;
    float gpa;

public:
    Students(void)
    {
        name = "Not Assigned";
        rollNo = 0;
        gpa = 0.0;
    }
    Students(string n, int r, float g)
    {
        name = n;
        rollNo = r;
        gpa = g;
    }
    Students(const Students &other)
    {
        name = other.name;
        rollNo = other.rollNo;
        gpa = other.gpa;
    }
    friend void printStudentCard(Students s);
};
void printStudentCard(Students s)
{
    cout << "THE NAME OF THE STUDENT IS " << s.name<<endl;
    cout << "ROLL NUMBER: " << s.rollNo<<endl;
    cout << "CGPA: " << s.gpa<<endl;
}
int main()
{
    Students a;
    Students b("AYUSH", 1, 10.0);
    Students c(b);
    cout<<"STUDENT A"<<endl;
    printStudentCard(a);
    cout<<"STUDENT B"<<endl;
    printStudentCard(b);
    cout<<"STUDENT C"<<endl;
    printStudentCard(c);
}